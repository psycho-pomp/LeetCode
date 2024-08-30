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
    public int ans=0;
    public int dfsHeight(TreeNode root){
        if(root == null) return 0;
        int lh = dfsHeight(root.left);
        int rh = dfsHeight(root.right);
        if(ans<lh+rh) ans=(lh+rh);
        return 1+Math.max(lh,rh);
        
    }
    public int diameterOfBinaryTree(TreeNode root) {
        dfsHeight(root);
        return ans;
        
    }
}