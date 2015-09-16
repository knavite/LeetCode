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
    ListNode* partition(ListNode* head, int x) {
        ListNode *newHead = NULL,*newHead2 = NULL,*headB=NULL,*headB2=NULL;
        while(head!=NULL) {
            if(head->val<x) {
                cout<<head->val;
                if(newHead==NULL) {
                    newHead=head;
                    headB = head;
                }
                else {
                    newHead->next = head;
                    newHead = newHead->next;
                }
            }
            else{
               if(newHead2==NULL) {
                    newHead2=head;
                    headB2 = head;
                }
                else {
                    newHead2->next = head;
                    newHead2 = newHead2->next;
                } 
            }
            head=head->next;
        }
        if(newHead!=NULL) {
            newHead->next = headB2;
        }
        else
            headB=headB2;
        if(newHead2!=NULL) {
            newHead2->next = NULL;
        }
        return headB;
    }
};