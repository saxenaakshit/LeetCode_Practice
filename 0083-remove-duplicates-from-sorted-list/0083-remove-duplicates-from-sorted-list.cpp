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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* curr=head;
        while(curr!=NULL){
            if((curr->next!=NULL)&& curr->val==curr->next->val){
                ListNode* next_next=curr->next->next;
                ListNode* del=curr->next;
                delete(del);
                curr->next=next_next;
            }
            else
                curr=curr->next;
        }
        return head;
        
    }
};