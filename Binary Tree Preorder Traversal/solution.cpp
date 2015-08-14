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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=NULL) {
            if(flag==0) {
                flag=1;
                trav.push_back(root->val);
                preorderTraversal(root->left);
                preorderTraversal(root->right);
                flag=0;
                return trav;
            }
            trav.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
            return trav;
        }
        return trav;
    }
};