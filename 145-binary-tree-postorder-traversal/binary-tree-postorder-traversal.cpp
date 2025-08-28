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
    void helper(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) return;
        helper(node->left, ans);            // Traverse left
        helper(node->right, ans);           // Traverse right
        ans.push_back(node->val);           // Visit node
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        helper(root,ans);
        return ans;
        
    }
};