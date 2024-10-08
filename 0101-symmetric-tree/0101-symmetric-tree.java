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
    public boolean checkSymmetric(TreeNode left,TreeNode right){
        if(left==null || right == null){
            return left==right;
        }
        return (left.val==right.val) && checkSymmetric(left.left,right.right) && checkSymmetric(left.right,right.left);
    }
    public boolean isSymmetric(TreeNode root) {
        if(root == null) return true;
        return checkSymmetric(root.left,root.right);
        
    }
}