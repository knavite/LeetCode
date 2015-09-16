/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        int n = listLength(head);
        return sortedListToBST(head,n);
    }
    
    TreeNode* sortedListToBST(ListNode* head,int n) {
        ListNode *headBackup = head,*fast=head,*slow=head,*prev=head;
        if(n==0) return NULL;
        if(n==1) {
            TreeNode* curr = new TreeNode(head->val);
            curr->left = NULL;
            curr->right = NULL;
            return curr;
        }
        while(fast!=NULL) {
            fast=fast->next;
            if(fast==NULL) break;
            fast=fast->next;
            prev=slow;
            slow=slow->next;
        }
        ListNode *mid = slow->next;
        prev->next=NULL;
        cout<<n;
        TreeNode* left = sortedListToBST(headBackup,n/2);
        TreeNode* right = sortedListToBST(mid,n-n/2-1);
        TreeNode* curr = new TreeNode(slow->val);
        curr->left = left;
        curr->right = right;
        return curr;
        
    }
    
    int listLength(ListNode* head) {
        int cnt=0;
        while(head!=NULL) {
            head = head->next;
            cnt++;
        }
        return cnt;
    }
};