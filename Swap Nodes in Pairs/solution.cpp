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
    ListNode* swapPairs(ListNode* head) {
        ListNode* backup = head,*prev=NULL;
        if(head!=NULL and head->next!=NULL) backup= head->next;
        while(head!=NULL && head->next!=NULL) {
            ListNode* temp = head->next->next;
            head->next->next = head;
            if(prev!=NULL)
                prev->next = head->next;
            prev=head;
            head=temp;
        }
        if(prev!=NULL)
            prev->next=head;
        return backup;
    }
};