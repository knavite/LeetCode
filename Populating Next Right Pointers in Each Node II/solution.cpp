/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode *cur=root,*tail=NULL,*head=NULL;
        while(root!=NULL) {
            if(root->left!=NULL) {
                if(tail!=NULL) {
                    tail->next = root->left;
                    tail=tail->next;
                }
                else
                    head=tail=root->left;
            }
            if(root->right!=NULL) {
                if(tail!=NULL){
                    tail->next = root->right;
                    tail=tail->next;
                }
                else
                    head=tail=root->right;
            }   
            root=root->next;
            if(root==NULL) {
                root=head;
                head=tail=NULL;
            }
        }
    }
};