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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> v;
        if(root==NULL) return res;
        pathSum(root,sum,v,res);
        return res;
    }
    void pathSum(TreeNode* root,int sum, vector<int> &v,vector<vector<int>> &res) {
        if(root->left==NULL && root->right==NULL) {
            if(sum-root->val==0) {
                v.push_back(root->val);
                res.push_back(v);
                v.pop_back();
                
            }
        } 
        else {
            v.push_back(root->val);
            if(root->left)  
                pathSum(root->left,sum-root->val,v,res);
            if(root->right)
                pathSum(root->right,sum-root->val,v,res);
            v.pop_back();
        }
    }
};