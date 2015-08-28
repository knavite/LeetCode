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
    int sumNumbers(TreeNode* root) {
        if(root!=NULL)
            return sumNumbers(root,0);
        else
            return 0;
    }
    int sumNumbers(TreeNode* root,int n) {
        if(root!=NULL) {
            n=n*10;
            n=n+root->val;
            if(root->left ==NULL && root->right==NULL)
                return n;
            int sum=0;
            if(root->left !=NULL )
                sum += sumNumbers(root->left,n);
            if(root->right!=NULL)
                sum += sumNumbers(root->right,n);
            return sum;
        }
        return n;
    }
};