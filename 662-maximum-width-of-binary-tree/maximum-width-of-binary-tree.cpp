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
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        if (!root) return ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int indmin=q.front().second;
            int n=q.size();
            int left,right;
            for(int i=0; i<n; i++){
                TreeNode* node= q.front().first;
                long long ind= q.front().second;
                q.pop();
                if(i==0)  left=ind;
                if(i==n-1)  right=ind;
                if(node->left) q.push({node->left,ind*2+1});
                if(node->right) q.push({node->right,ind*2+2});
            
            }
            ans=max(ans,right-left+1);


        }
        return ans;
        
    }
};