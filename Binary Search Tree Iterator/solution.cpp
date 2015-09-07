/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode *> s;
    TreeNode *curr;
    BSTIterator(TreeNode *root) {
        curr = root;
        while(curr!=NULL) {
            s.push(curr);
            curr=curr->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(s.empty())
            return false;
        return true;
    }

    /** @return the next smallest number */
    int next() {
       if(!s.empty()) {
           TreeNode* ret = s.top();
           int val = ret->val;
           s.pop();
           if(ret->right!=NULL) {
               s.push(ret->right);
               ret=ret->right;
               while(ret->left!=NULL) {
                   s.push(ret->left);
                   ret=ret->left;
               }
           }
           return val;
       }
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */