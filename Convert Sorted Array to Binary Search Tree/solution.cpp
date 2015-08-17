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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTHelper(nums,0,nums.size()-1);
    }
    
    TreeNode* sortedArrayToBSTHelper(vector<int>& nums,int l,int r) {
        if(l>r) return NULL;
        int mid = (l+r)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBSTHelper(nums,l,mid-1);
        root->right = sortedArrayToBSTHelper(nums,mid+1,r);
        return root;
    }
    
};