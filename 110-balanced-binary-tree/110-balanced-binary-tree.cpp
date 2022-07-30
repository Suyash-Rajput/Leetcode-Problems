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
    bool  f=true ;  
    int suyash(TreeNode *root) {
    if(!root) return 0 ;
        int l = suyash(root->left) ;
        int r =suyash(root->right); 
        
        if(abs(l-r)>1) {
            f=false; 
        }
 
        return max(l,r)+1; 
    }
    bool isBalanced(TreeNode* root) {
        suyash(root) ;
        return f ;
    }
};