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
    public ListNode mergeNodes(ListNode head) {
        ListNode temp=head.next;
        int curr=0;
        ListNode newHead= new ListNode();
        ListNode tempNew=new ListNode();
        while(temp!=null){
            //System.out.println(temp.val);
            if(temp.val==0){
                if(tempNew.val==0){
                    newHead=new ListNode(curr);
                    tempNew=newHead;
                }
                else{
                    tempNew.next=new ListNode(curr);
                    tempNew=tempNew.next;
                }
                curr=0;
                
            }
            curr+=temp.val;
            temp=temp.next;
        }
        return newHead;
    }
}