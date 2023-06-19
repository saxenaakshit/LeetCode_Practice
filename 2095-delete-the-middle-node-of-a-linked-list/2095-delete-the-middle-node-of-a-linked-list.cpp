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
    private:
    
    
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* slw=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        
        if(head==NULL )
            return head;
        if(head->next==NULL)
            return NULL;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                prev=slw;
                fast=fast->next;
                slw=slw->next;
            }
        }
        prev->next=slw->next;
        delete slw;
        return head;
    }
};