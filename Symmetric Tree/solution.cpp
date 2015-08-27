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
    bool isSymmetric(TreeNode* root) {
        if(root!=NULL)
            return isSymmetric(root->left,root->right);
        else 
            return true;
    }
    
    bool isSymmetric(TreeNode* root1,TreeNode* root2) {
        if(root1==NULL && root2==NULL) 
            return true;
        else if(root1==NULL || root2==NULL) 
            return false;
        else if(root1->val==root2->val) {
            bool res = true;
            res = res && isSymmetric(root1->left,root2->right);
            res = res && isSymmetric(root2->left,root1->right);
            return res;
        }
        return false;
    }
};