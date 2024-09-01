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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry=0;
        ListNode head=null,curr=null;
        while(l1!=null || l2!=null){
            //System.out.println(l1.val+"-"+l2.val+"-"+carry);
            int curr_sum=carry;
            if(l1!=null) curr_sum+=l1.val;
            if(l2!=null) curr_sum+=l2.val;
            carry=(curr_sum)/10;
            ListNode temp=new ListNode(curr_sum%10);
            if(head==null){
                head=temp;
                curr=temp;
            }
            else{
                curr.next=temp;
                curr=curr.next;
            }
            
            if(l1!=null)l1=l1.next;
            if(l2!=null)l2=l2.next;
            
        }
        if(carry>0) curr.next=new ListNode(carry);
        return head;
        
    }
}