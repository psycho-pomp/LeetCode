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
    public int maxDepth(TreeNode root) {
        if(root==null) return 0;
        Queue<TreeNode> queue = new  LinkedList<>();
        int height=0;
        queue.add(root);
        while(!queue.isEmpty()){
            int lvl = queue.size();
            height++;
            for(int i=0;i<lvl;i++){
                TreeNode front= queue.remove();
                if(front.left!=null) queue.add(front.left);
                if(front.right!=null) queue.add(front.right);
                
            }
            
            
        }
        return height;
        
    }
}