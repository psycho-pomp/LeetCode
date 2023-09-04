/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *i=head;
        if(i==NULL) return false;
        ListNode *j=head->next;
         if(j==NULL) return false;
        while(i!=j){
            if(j==NULL || j->next==NULL){
                return false;
            }
            i=i->next;
            j=j->next->next;
        }
        return true;
        
    }
};