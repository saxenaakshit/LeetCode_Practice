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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
if(head->next==NULL) return NULL;
        
ListNode *fast = head;
 ListNode *slow = head;
 ListNode *res = slow;
 for(int i=1;i<n;i++){
 fast = fast->next;}
 while(fast->next!=NULL)
 {
 res = slow;
 slow = slow->next;
 fast = fast->next;
 }
 if(slow==head) head=head->next;
 res->next = slow->next;
 
 
return head;
    }
};