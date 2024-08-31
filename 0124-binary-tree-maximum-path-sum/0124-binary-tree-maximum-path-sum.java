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
    public int maxPath=Integer.MIN_VALUE;
    public int getPathSum(TreeNode root){
        if(root==null) return 0;
        int lsum= Math.max(0,getPathSum(root.left));
        int rsum= Math.max(0,getPathSum(root.right));
        maxPath=Math.max(maxPath,root.val+lsum+rsum);
        
        return root.val+Math.max(lsum,rsum);
    }
    public int maxPathSum(TreeNode root) {
        getPathSum(root);
        return maxPath;
        
    }
}