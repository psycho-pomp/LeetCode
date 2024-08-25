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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        //List<List<Integer>> result = new ArrayList<>();
        if(root==null){
            return result;
        }
        queue.add(root);
        while(!queue.isEmpty()){
            List<Integer> lvl = new ArrayList<>();
            int queueLength=queue.size();
            for(int i=0;i<queueLength;i++){
                TreeNode front=queue.remove();
                if(front.left!=null){
                    queue.add(front.left);
                }
                if (front.right!=null){
                   queue.add(front.right); 
                }
                lvl.add(front.val);
                
                
            }
            result.add(lvl);
        }
        return result;
    }
}