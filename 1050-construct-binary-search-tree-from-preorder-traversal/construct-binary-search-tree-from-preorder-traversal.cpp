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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bst(preorder,0,preorder.size()-1);
        
        
    }
    TreeNode* bst(vector<int>&preorder,int start,int end){
        if(start>end) return nullptr;
        TreeNode* root= new TreeNode(preorder[start]);
        int left_sub=start+1;
        while(left_sub<=end && preorder[start]>preorder[left_sub]){
            left_sub++;
        }
        root->left= bst(preorder,start+1, left_sub-1);
        root->right= bst(preorder,left_sub,end);
        return root;
    }
};