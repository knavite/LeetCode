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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push((TreeNode*)-1);
        vector<int>* v;
        v=new vector<int>();
        stack<vector<int> > s;
        while(!q.empty()) {
            cout<<q.size();;
            TreeNode* curr = q.front();
            if(curr!=(TreeNode*)-1) {
                if(curr!=NULL) {
                    q.push(curr->left);
                    q.push(curr->right);
                    v->push_back(curr->val);
                }
                q.pop();
            }
            else {
                if(v->size()!=0)
                    s.push(*v);
                v = new vector<int>();
                q.pop();
                if(!q.empty())
                    q.push((TreeNode*)-1);
            }
            
        }
        vector<vector<int>> res;
        while(!s.empty()) {
            res.push_back(s.top());
            s.pop();
        }
        return res;  
    }
};