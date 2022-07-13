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
    
   
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> v ;
        queue<TreeNode *> q ;
        if(root==NULL) return v ;
        q.push(root) ;
        while(!q.empty()) {
            vector<int> a ;
            int b = q.size() ;
            for(int i=0;i<b;i++) {
                TreeNode *c=  q.front( ) ;
                q.pop() ;
                if(c->left) q.push(c->left) ;
                if(c->right) q.push(c->right) ;
                a.push_back(c->val) ;
                
            }
            
          v.push_back(a) ;  
            
        }
        
        
        return v ;
    }
};