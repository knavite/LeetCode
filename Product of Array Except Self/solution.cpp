class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productLeft[nums.size()];
        int productRight[nums.size()];
        productLeft[0] = 1;
        for(int i=1;i<nums.size();i++) 
            productLeft[i] = nums[i-1]*productLeft[i-1];
        productRight[nums.size()-1] = 1;
        for(int i=nums.size()-2;i>=0;i--) 
            productRight[i] = nums[i+1]*productRight[i+1];
        vector<int> product;
        for(int i=0;i<nums.size();i++)
            product.push_back(productLeft[i]*productRight[i]);
        return product;
    }
};