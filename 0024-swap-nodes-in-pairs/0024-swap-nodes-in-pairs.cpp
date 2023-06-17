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
    ListNode* swapPairs(ListNode* head) {
        ListNode * dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        
        while(curr!=NULL && curr->next!=NULL)
        {
            //save pointers
            ListNode* nxtp=curr->next->next;
            ListNode* second=curr->next;
            
            //reverse the pairs
            second->next=curr;
            curr->next=nxtp;
            prev->next=second;
            
            //updation
            prev=curr;
            curr=curr->next;
            
            
            
        }
    return dummy->next;}
};