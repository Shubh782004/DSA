/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(k==0) return {target->val};
        vector<int>ans;
        queue<TreeNode*>q;
        unordered_map<TreeNode*,TreeNode*>parent;
        int dis=0;
        q.push(root);
        parent[root]=root;
        while(!q.empty()){
            int n= q.size();
            for(int i=0; i<n ; i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                    parent[temp->left]=temp;

                }
                if(temp->right){
                    q.push(temp->right);
                    parent[temp->right]=temp;
                }
            }
        }
        queue<TreeNode*>t;
        vector<int>vis(501,0);
        t.push(target);
        vis[target->val]=1;
        while(!t.empty() && dis<k){
            int n=t.size();
            for(int i=0; i<n ; i++){
                TreeNode* node= t.front();
                t.pop();
                if(node->left && !vis[node->left->val]) {
                    t.push(node->left);
                    vis[node->left->val]=1;
                }
                if(node->right && !vis[node->right->val]) {
                    t.push(node->right);
                    vis[node->right->val]=1;
                }
                if(parent[node]&& !vis[parent[node]->val]){
                    t.push(parent[node]);
                    vis[parent[node]->val]=1;

                }
            }
            dis++;
        }
        while(!t.empty()){
            ans.push_back(t.front()->val);
            t.pop();

        }
        return ans;


        
        
    }
};