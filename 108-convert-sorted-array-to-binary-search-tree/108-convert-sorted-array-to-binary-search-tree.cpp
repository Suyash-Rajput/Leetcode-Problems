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
    TreeNode  * suyash(vector<int> nums,int a,int b) {
        
        if(a>b) return NULL ;
        int m =  (a+b)/2 ;
        TreeNode* mid = new TreeNode(nums[m]);
        mid->left = suyash(nums,a,m-1) ;
        mid->right= suyash(nums,m+1,b) ;
        
return mid ;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
          int a = 0 ;
        int b = nums.size() ;
        
    return     suyash(nums,a,b-1) ;

    }
};