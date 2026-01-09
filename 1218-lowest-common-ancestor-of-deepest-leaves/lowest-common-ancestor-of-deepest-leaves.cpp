
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
    int maxDep=0;
    TreeNode* ans;
    int helper(TreeNode* root, int d){
        if(!root) {
            maxDep=max(maxDep,d);
            return d;
        }
        int left= helper(root->left,d+1);
        int right=helper(root->right, d+1);
        if(left==maxDep && right==maxDep){
            ans=root;
        }
        return max(left,right);
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        helper(root,0);
        return ans;
        
    }
};