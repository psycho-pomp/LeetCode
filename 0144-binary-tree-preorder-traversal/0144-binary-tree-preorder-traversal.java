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
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> pre = new ArrayList<Integer>();
        TreeNode curr = root;
        while(curr!=null){
            if(curr.left==null){
                pre.add(curr.val);
                curr=curr.right;
            }
            else{
                TreeNode next = curr.left;
                while(next.right!=null && next.right!=curr){
                    next=next.right;
                }
                if(next.right==null){
                    next.right=curr;
                    pre.add(curr.val);
                    curr=curr.left;
                }
                else{
                    next.right=null;
                    curr=curr.right;
                }
            }
        }
        return pre;
        
    }
}