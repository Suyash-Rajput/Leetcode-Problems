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
        if(root==NULL)return v ;
        queue<TreeNode* > q; 
       
        q.push(root) ;
        bool left =true ;
        while(!q.empty()){
            int a =q.size() ;
            vector<int> row(a) ;
            for(int i=0;i<a;i++) {
                 TreeNode *node =q.front() ;
                q.pop();
                 int index = (left )? i:(a-1-i) ;
                 row[index ] =node->val ;
                if(node->left)
                    q.push(node->left) ;
                if(node->right) 
                    q.push(node->right);
            }            
            left =!left ;
            v.push_back(row) ;
        }
       
return v ;        
    }
};