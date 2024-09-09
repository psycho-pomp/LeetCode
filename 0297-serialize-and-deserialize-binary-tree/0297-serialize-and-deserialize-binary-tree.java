/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Codec {
    public String serializeString="";
    // Encodes a tree to a single string.
    public String serialize(TreeNode root) {
        String serializeString="";
        if(root == null) return serializeString;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode curr=q.remove();
                
                if(curr!=null){
                    serializeString+=(String.valueOf(curr.val)+",");
                    q.add(curr.left);
                    q.add(curr.right);
                }
                else serializeString+="#,";
                
            }
            
        }
        return serializeString;
        
    }

    // Decodes your encoded data to tree.
    public TreeNode deserialize(String data) {
        System.out.println(data);
        if(data.length()<1) return null;
        String[] serList=data.split(",");
        System.out.println(serList.length);
        
        TreeNode root;
        Queue<TreeNode> q = new LinkedList<>();
        if(!serList[0].equals("#")) {
            root=new TreeNode(Integer.valueOf(serList[0]));
            q.add(root);
        }
        else return null;
        int i=1;
        while(!q.isEmpty()){
            int len=q.size();
            for(int j=0;j<len;j++){
                TreeNode curr=q.remove();
                if(!serList[i].equals("#")){
                    curr.left=new TreeNode(Integer.valueOf(serList[i]));
                    q.add(curr.left);
                }
                else{
                    curr.left=null;
                }
                if(!serList[i+1].equals("#")){
                    curr.right=new TreeNode(Integer.valueOf(serList[i+1]));
                    q.add(curr.right);
                }
                else{
                    curr.right=null;
                }
                i+=2;
            }
                                        
        }
        return root;
    }
}

// Your Codec object will be instantiated and called as such:
// Codec ser = new Codec();
// Codec deser = new Codec();
// TreeNode ans = deser.deserialize(ser.serialize(root));