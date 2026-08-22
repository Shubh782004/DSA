/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>InMap;
        for(int i=0; i<inorder.size(); i++){
            InMap[inorder[i]]=i; //store the index of the every node
        }
        TreeNode* root= bTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,InMap);
        return root;
        
    }
    TreeNode* bTree(vector<int>&preorder, int preStart, int preEnd, vector<int>&inorder, int inStart, int inEnd, map<int,int>&InMap){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode* root= new TreeNode(preorder[preStart]);
        int inRoot= InMap[root->val];
        int rempos=inRoot-inStart;

        root->left= bTree(preorder,preStart+1,preStart+rempos,inorder,inStart,inRoot-1,InMap);
        root->right= bTree(preorder,preStart+rempos+1,preEnd,inorder,inRoot+1,inEnd,InMap);
        return root;



    }
};