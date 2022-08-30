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

    
    TreeNode *suyash(vector<int> &nums,int a,int b) {
        if(a>b) return NULL;
        int mid = a+(b-a)/2 ;
        
        TreeNode * m =  new TreeNode(nums[mid]) ;
        m->left = suyash(nums,a,mid-1);
        m->right =suyash(nums,mid+1,b);
        
        
        return m  ;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int a = 0; 
        int b = nums.size() ;
        return suyash(nums,a,b-1);
        
        
    }
};
 