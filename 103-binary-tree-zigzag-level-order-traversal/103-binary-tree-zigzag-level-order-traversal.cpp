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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v; 
        if(!root) return v;
      queue<TreeNode * > q; 
        q.push(root) ;
        bool f =true ;
        while(!q.empty()){
             int a = q.size() ;
            vector<int> res(a) ;
            for(int i=0;i<a;i++) {
                TreeNode *r = q.front() ;
                q.pop() ;
                int  index  =(f) ?i: (a-i-1) ; 
                res[index] = r->val ;
                if(r->left) {
                    q.push(r->left) ;
                }
                if(r->right){
                    q.push(r->right) ;
                }
             }
            f=!f ;
            v.push_back(res) ;
        }
        
        
    return v; 
    }
};