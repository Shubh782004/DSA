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
    TreeNode* replaceValueInTree(TreeNode* root) {
        root->val=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<TreeNode*>c;
            int n=q.size();
            int sum=0;
            for(int i=0; i<n ; i++){
                TreeNode* node= q.front();
                q.pop();
                c.push_back(node);
                if(node->left) {
                    sum+=node->left->val;
                    q.push(node->left);
                }
                if(node->right) {
                    sum+=node->right->val;
                    q.push(node->right);
                }
            }
            for(auto node:c){
                int t=sum;
                if(node->left) t-=node->left->val;
                if(node->right) t-=node->right->val;
                if(node->left) node->left->val=t;
                if(node->right) node->right->val=t;
            }

        }
        return root;
        
    }
};