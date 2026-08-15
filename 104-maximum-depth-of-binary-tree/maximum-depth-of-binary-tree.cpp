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
    int dfs(TreeNode* root, int depth){
        if(root==NULL) return 0;
        int left= dfs(root->left, depth);
        int right= dfs(root->right, depth);
        return max(left,right)+1;

    }
    int maxDepth(TreeNode* root) {
        return dfs(root,0);

    
        
    }
};