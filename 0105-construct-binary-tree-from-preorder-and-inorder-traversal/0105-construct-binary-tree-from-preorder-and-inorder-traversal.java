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
    
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        Map<Integer,Integer> inMap = new HashMap<>();
        for(int i=0;i<inorder.length;i++){
            inMap.put(inorder[i],i);
        }
        TreeNode root = buildTree(preorder,0,preorder.length-1,0,inorder.length-1,inMap);
        return root;
        
    }
    public TreeNode buildTree(int[] preorder,int preStart,int preEnd,int inStart,int inEnd,Map<Integer,Integer> inMap){
        if(preStart>preEnd || inStart>inEnd) return null;
        
        TreeNode root = new TreeNode(preorder[preStart]);
        int rootIndex=inMap.get(root.val);
        int nodesToLeftInorder = rootIndex-inStart;
        root.left =  buildTree(preorder,preStart+1,preStart+nodesToLeftInorder,
                               inStart,inStart+nodesToLeftInorder-1,inMap);
        root.right =  buildTree(preorder,preStart+nodesToLeftInorder+1,preEnd,
                               inStart+nodesToLeftInorder+1,inEnd,inMap);
        return root;
    }
}