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
    TreeNode *prev=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        TreeNode* b=root->left;
        TreeNode *b2=root->right;
        root->left = NULL;
        if(prev!=NULL) {
            prev->right = root;
        }
        root->right=NULL;
        prev = root;
        flatten(b);
        flatten(b2);
    }
};