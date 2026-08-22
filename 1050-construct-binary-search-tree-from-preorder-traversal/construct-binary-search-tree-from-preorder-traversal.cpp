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
        TreeNode* root= BST(preorder,0,preorder.size()-1);
        return root;
        
        
    }
    TreeNode* BST(vector<int>& preorder, int start, int end){
        if(start>end) return NULL;
        TreeNode* root= new TreeNode(preorder[start]);
        int ltree=start+1;
        while(ltree<=end && root->val>=preorder[ltree]) ltree++;
        root->left= BST(preorder,start+1,ltree-1);
        root->right=BST(preorder,ltree,end);
        return root;
    }
};