Approach-1
By Iteration
class Solution {
public:
ListNode* reverseList(ListNode* head) {
ListNode* prev=NULL;
ListNode* forward=NULL;
ListNode* curr=head;
while(curr!=NULL){
forward=curr->next;
curr->next=prev;
prev=curr;
curr=forward;
}
return prev;
}
Approach-2
by recursion
if head==NULL || head->next==NULL
return head;
1.get temp pointing to the head->next
2.get reversed head of the linked list from temp to the end of the linkedlist
3.point head.next.next to head and head.next to NULL;
};