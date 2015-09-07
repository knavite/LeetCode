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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v;
        if(root==NULL) return v;
        q.push(root);
        while(!q.empty()) {
            int numNode = q.size();
            TreeNode *curr = NULL;
            for(int i=0;i<numNode;i++) {
                curr = q.front();
                q.pop();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            if(curr!=NULL) v.push_back(curr->val);
        }
        return v;
    }
};