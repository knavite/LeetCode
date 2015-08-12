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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p != NULL && q != NULL && p->val == q->val) {
            int left = isSameTree(p->left,q->left);
            int right = isSameTree(p->right,q->right);
            if(left && right) return 1;
            else return 0;
        }
        else if(p== NULL && q== NULL)
            return 1;
        else return 0;
            
        
    }
};