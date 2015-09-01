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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        if(root==NULL) return res;
        vector<int> *cur = new vector<int>();
        q.push(root);
        q.push((TreeNode*)-1);
        while(!q.empty()) {
            TreeNode *p = q.front();
            if (p==(TreeNode*)-1) {
                if((*cur).size()!=0)
                res.push_back(*cur);
                cur = new vector<int>();
                q.pop();
                if(!q.empty())
                    q.push((TreeNode*)-1);
                
            }
            else if(p!=NULL) {
                q.push(p->left);
                q.push(p->right);
                cur->push_back(p->val);
                q.pop();
            }
            else
                q.pop();
            
        }
        return res;
    }
};