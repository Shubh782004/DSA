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
    //Using DFS
    // void helper(TreeNode* node, vector<int>& ans) {
    //     if (node == nullptr) return;

    //     ans.push_back(node->val);           // Visit node
    //     helper(node->left, ans);            // Traverse left
    //     helper(node->right, ans);           // Traverse right
    // }
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int>ans;
    //     helper(root,ans);
    //     return ans;

        
        
    // }

    //Using stack iterative
    vector<int> preorderTraversal(TreeNode* root){
        stack<TreeNode*>st;
        vector<int>ans;
        if(root == NULL) return ans;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            ans.push_back(root->val);
            if(root->right != NULL) st.push(root->right);
            if(root->left!=NULL) st.push(root->left);
        }
        return ans;
    }
};