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
    bool isBalanced(TreeNode* root) {
        bool res;
        isBalancedHelper(root,res);
        return res;
    }
    
    int isBalancedHelper(TreeNode* root,bool& res) {
        if(root==NULL) {
            res = true;
            return 0;
        }
        else {
            bool res1,res2;
            int h1 = isBalancedHelper(root->left,res1)+1;
            int h2 = isBalancedHelper(root->right,res2)+1;
            res = res1 && res2 && abs(h1-h2)<2;
            return h1>h2?h1:h2;
        }
    }
};