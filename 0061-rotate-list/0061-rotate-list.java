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
    public ListNode rotateRight(ListNode head, int k) {
        ListNode curr=head;
        int length=0;
        while(curr!=null){
            length++;
            curr=curr.next;
        }
        if(length==0) return head;
        k=k%length;
        curr=head;
        int pos=1;
        while(pos!=length-k){
            curr=curr.next;
            pos++;
        }
        ListNode tail=curr;
        ListNode newHead=curr.next;
        while(curr.next!=null){
            curr=curr.next;
        }
        curr.next=head;
        tail.next=null;
        return k>0?newHead:head;
        
        
    }
}