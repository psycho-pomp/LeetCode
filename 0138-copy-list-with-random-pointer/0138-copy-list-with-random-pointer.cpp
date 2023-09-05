/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head== NULL) return NULL;
        Node* headDeepCopy=new Node(head->val);
        Node* prev=headDeepCopy;
        Node* temp=head;
        map<Node*,Node*>mp;
        while(temp->next){
            mp[temp]=prev;
            temp=temp->next;
            Node* temp1=new Node(temp->val);
            prev->next=temp1;
            prev=temp1;   
        }
        mp[temp]=prev;
        temp=head;
        prev=headDeepCopy;
        while(temp){
            prev->random=mp[temp->random];
            temp=temp->next;
            prev=prev->next;  
        }
        return headDeepCopy;
        
    }
};