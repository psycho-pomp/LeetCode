/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if(root==null){
            return null;
        }
        if(root.val==p.val){
            return p;
        }
        else if(root.val==q.val){
            return q;
        }
        TreeNode lvalue=lowestCommonAncestor(root.left,p,q);
        TreeNode rvalue=lowestCommonAncestor(root.right,p,q);
        if(lvalue!=null && rvalue!=null){
            return root;
        }
        else if(lvalue!=null){
            return lvalue;
        }
        else if(rvalue!=null){
            return rvalue;
        }
        else{
            return null;
        }
    }
}