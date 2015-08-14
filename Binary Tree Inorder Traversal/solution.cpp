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
    vector<int> trav;
    int flag = 0;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root!=NULL) {
            if(flag==0) {
                flag=1;
                inorderTraversal(root->left);
                trav.push_back(root->val);
                inorderTraversal(root->right);
                flag=0;
                return trav;
            }
            inorderTraversal(root->left);
            trav.push_back(root->val);
            inorderTraversal(root->right);
            return trav;
        }
        return trav;
    }
};