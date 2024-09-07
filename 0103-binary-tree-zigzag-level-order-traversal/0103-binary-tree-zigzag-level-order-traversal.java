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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result= new ArrayList<>();
        if(root==null) return result;
        
        Queue<TreeNode> st= new LinkedList<>();
        st.add(root);
        int flag=0;
        while(!st.isEmpty()){
            int len=st.size();
            List<Integer> temp=new ArrayList<>(Collections.nCopies(len, null));
            
            for(int i=0;i<len;i++){
                TreeNode curr=st.remove();
                int idx=flag==1?len-i-1:i;
                //System.out.println(idx+","+len);
                temp.set(idx,curr.val);
                if(curr.left!=null){
                    st.add(curr.left);
                }
                if(curr.right!=null){
                    st.add(curr.right);
                }
            }
            result.add(temp);
            if(flag==0)flag=1;
            else flag=0;
        }
        return result;
    }
}