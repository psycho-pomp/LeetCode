/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* leftNode= NULL;
        ListNode* rightNode=NULL;
        int idx=1;
        while(temp){
            next=temp->next;
            if(idx==left){
                leftNode=prev;
                rightNode=temp;
            }
            else if(idx>left && idx<right){
                temp->next=prev;
            }
            else if(idx==right){
                temp->next=prev;
                if(leftNode!=NULL)leftNode->next=temp; 
                if(rightNode!=NULL)rightNode->next=next;
                if(leftNode==NULL) head=temp;
            }
            idx++;
            prev=temp;
            temp=next;
        }
        return head;
        
    }
};