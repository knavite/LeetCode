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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=NULL) {
            if(flag==0) {
                flag=1;
                
                postorderTraversal(root->left);
                postorderTraversal(root->right);
                trav.push_back(root->val);
                flag=0;
                return trav;
            }
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            trav.push_back(root->val);
            return trav;
        }
        return trav;
    }
};