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
    bool isValidBST(TreeNode* root) {
        return isValidBST(root,INT_MIN-5ll,INT_MAX+5ll);
    }
    
    bool isValidBST(TreeNode* root,long long min,long long max) {
        bool res=true;
        if(root==NULL) return res;
        cout<<root->val<<min<<max<<endl;
        if(root->val>min && root->val<max) 
            res = true;
        else 
            return false;
        res = res && isValidBST(root->left,min,root->val);
        res = res && isValidBST(root->right,root->val,max);
        return res;
    }
};