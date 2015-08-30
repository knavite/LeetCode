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
    int i;
    int kthSmallest(TreeNode* root, int k) {
        i=0;
        return kthSmallestHelper(root,k);
    }
    int kthSmallestHelper(TreeNode *root,int k) {
        if(root!=NULL) {
            int ret = kthSmallestHelper(root->left,k);
            if(ret!=-1) return ret;
            i++;
            if(i==k) return root->val;
            ret = kthSmallestHelper(root->right,k);
            return ret;
        }
        return -1;
    }
};