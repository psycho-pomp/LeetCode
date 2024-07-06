/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {
        ListNode temp=head.next;
        ListNode prev=head;
        int count=2;
        int[] res=new int[]{-1,-1};
        int l=0;
        List<Integer> criticalPoint= new ArrayList<>();
        while(temp.next!=null){
            if((temp.next.val>temp.val && temp.val<prev.val) || (temp.next.val<temp.val && temp.val>prev.val)){
                criticalPoint.add(count);
                l++;
                if(l>1){
                    if(res[0]!=-1){
                        res[0]=Math.min(res[0],criticalPoint.get(l-1)-criticalPoint.get(l-2));
                    }
                    else{
                        res[0]=criticalPoint.get(l-1)-criticalPoint.get(l-2);
                    }
                }
            }
            prev=prev.next;
            temp=temp.next;
            count++;
            
        }
        for(Integer val:criticalPoint){
            System.out.println(val);
        }
        if(l>1){
            res[1]=criticalPoint.get(l-1)-criticalPoint.get(0);
            
            //res[0]=criticalPoint.get(l-1)-criticalPoint.get(l-2);
            
            
        }
            
        return res;
        
    }
}