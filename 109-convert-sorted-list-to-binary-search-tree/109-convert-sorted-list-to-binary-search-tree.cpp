/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode *func(vector<int> v,int a,int b) {
        if(a>b) return NULL;
        int m=  a+(b-a)/2 ;
        TreeNode *mid = new TreeNode(v[m]) ;
        mid->left = func(v,a,m-1) ;
        mid->right= func(v,m+1,b) ;
        
        return mid;
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v ;
        while(head!=NULL) {
            v.push_back(head->val) ;
            head=head->next ;
        }
        
    return    func(v,0,v.size()-1) ;
    
    }
};