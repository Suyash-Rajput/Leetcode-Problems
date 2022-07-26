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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
        return root;
    }
    if(root->val==key){
        return helper(root);
    }
    TreeNode* dummy=root;
    while(root!=NULL){
        if(key>root->val){
            if(root->right!=NULL && root->right->val==key){
                root->right=helper(root->right);
                break;
            }
            else{
                root=root->right;
            }
        }
        else {
              if(root->left!=NULL && root->left->val==key){
                root->left=helper(root->left);
                break;
            }
            else{
                root=root->left;
            }
        }
    }
    return dummy;
        
            
  
    }
    
    TreeNode *helper(TreeNode *root){
        if(root->left==NULL) return root->right ;
        if(root->right==NULL) return root->left ;
        
        TreeNode *curr= root->right   ; 
        TreeNode *r = last(root->left ) ;
        r->right=curr; 
        return root->left ;
    }
    TreeNode *last(TreeNode *root) {
        if(root->right==NULL) return root ;
        return last(root->right);
    }
    
    
};