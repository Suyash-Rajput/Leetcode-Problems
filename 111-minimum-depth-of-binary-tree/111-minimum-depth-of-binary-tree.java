/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int minDepth(TreeNode root) {
         if(root==null) return  0 ;
        Queue<TreeNode> q  =new ArrayDeque();
        q.offer(root) ;
        int depth=1;
        while(!q.isEmpty()){
            int s =q.size() ;
           for(int i=0;i<s;i++) {
               TreeNode w = q.poll() ;
               if(w.left!=null )
                   q.offer(w.left) ;
               if(w.right!=null)
                   q.offer(w.right) ;
               if(w.left==null && w.right==null) return depth ;
           }       
            
            depth++ ;
        }
        
        
        
        return -1 ;
    }
} 