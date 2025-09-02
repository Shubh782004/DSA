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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       TreeNode* new_node = new TreeNode(val);
       TreeNode* temp= root;
       if(root == NULL) return new_node;
       while(temp!=NULL){
        if(temp->val > new_node->val){
            if(temp->left==NULL) {
                temp->left=new_node;
                break;
            }
            temp=temp->left;
        }
        else{
            if(temp->right==NULL){
                temp->right= new_node;
                break;
            }
            temp=temp->right;
                
        }

       }
       return root;
        
    }
};