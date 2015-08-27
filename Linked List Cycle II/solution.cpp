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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head,*fast=head,*backup=head;
        bool found = true;
        do {
            if(slow!=NULL) slow = slow->next;
            else {
                found=false;
                break;
            }
            if(fast!=NULL && fast->next!=NULL) fast = fast->next->next;
            else {
                found=false;
                break;
            }
        } while(slow!=fast);
        if(found) {
            while(slow!=backup){
                slow = slow->next;
                backup = backup->next;
            }
            return slow;
        }
        else
            return NULL;
    }
};