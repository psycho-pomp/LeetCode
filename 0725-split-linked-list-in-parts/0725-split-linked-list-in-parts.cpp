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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length=0;
        vector<ListNode*> out;
        ListNode* temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        int noOfNodes=length/k;
        int extraNodes=length%k;
        temp=head;
        int splitLength;
        if(extraNodes){
            splitLength=noOfNodes+1;
            extraNodes--;
        }
        else{
            splitLength=noOfNodes;
        }
        int i=1;
        ListNode* tempHead;
        ListNode* tempItr;
        while(temp){
            if(i==1){
                tempHead=new ListNode(temp->val);
                tempItr=tempHead;
                out.push_back(tempHead); 
            }
            else{
                ListNode* curr=new ListNode(temp->val);
                tempItr->next=curr;
                tempItr=curr;
                
            }
            if(i==splitLength){
                    tempHead=NULL;
                    tempItr=NULL;
                    i=1;
                    if(extraNodes){
                        splitLength=noOfNodes+1;
                        extraNodes--;
                    }
                    else{
                        splitLength=noOfNodes;
                    }
                }
                else{
                    i++;
                }
            temp=temp->next;     
        }
        for(int ij=out.size();ij<k;ij++){
            out.push_back(NULL);
            
        }
        return out;
        
        
    }
};