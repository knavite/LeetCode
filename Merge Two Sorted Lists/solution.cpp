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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* head;
        if(l1->val > l2->val) {
            head = l2;
            l2=l2->next;
        }
        else {
            head= l1;
            l1=l1->next;
        }
        ListNode* backup = head;
        while(1) {
            if(l1==NULL) {
                head->next = l2;
                break;
            }
            if(l2==NULL) {
                head->next = l1;
                break;
            }
            if(l1->val > l2->val) {
                head->next = l2;
                l2=l2->next;
            }
            else {
                head->next = l1;
                l1=l1->next;
            }
            head=head->next;
        }
        return backup;
    }
};