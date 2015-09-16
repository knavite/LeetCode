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
    int curr;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        curr = inorder.size()-1;
        return buildTree(inorder,postorder,0,inorder.size()-1);
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder,int start,int endd) {
        if(start>endd) return NULL;
        int  root = postorder[curr--];
        cout<<root<<" "<<start<<endd<<endl;
        int i;
        for(i=start;i<=endd;i++) {
            if(inorder[i]==root)
                break;
        }
        TreeNode* rootNode = new TreeNode(root);
        rootNode->right = buildTree(inorder,postorder,i+1,endd);
        rootNode->left = buildTree(inorder,postorder,start,i-1);
        return rootNode;
    }
};