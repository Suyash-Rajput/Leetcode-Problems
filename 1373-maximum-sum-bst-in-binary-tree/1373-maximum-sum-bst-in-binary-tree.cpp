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
class info {
    public :
   int mini;
    int maxi;
    bool isbst;
    int size;
};
class Solution {
public:
    info suyash(TreeNode *root,int &maxsize) {
       if (root==NULL){
            return {INT_MAX,INT_MIN,true,0};
        }
        
        
        info left = suyash(root->left,maxsize) ;
        info right = suyash(root->right,maxsize) ; 
        
        info curr ;
        curr.size = left.size+right.size +root->val;
        curr.maxi = max(root->val,right.maxi) ;
        curr.mini = min(root->val,left.mini) ;
        
        if(left.isbst && right.isbst &&( root->val> left.maxi && root->val< right.mini  )){
            curr.isbst=true ;
        }
        else
            curr.isbst= false; 
        
        if(curr.isbst){
            maxsize = max(maxsize,curr.size) ;
        }
        
        return curr ;
    }
    
    int maxSumBST(TreeNode* root) {
         int maxsize=0 ;
        suyash(root,maxsize) ;
        return maxsize ;
    }
};