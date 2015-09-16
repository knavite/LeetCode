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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=NULL,*b=head,*headBackup=head;
        n++;
        while(n--) {
            head = head->next;
            if(head==NULL && n!=0) {
                return headBackup->next;
            }
        }
        while(head!=NULL) {
            b=b->next;
            head=head->next;
        }
        b->next=b->next->next;
        return headBackup;
    }
};