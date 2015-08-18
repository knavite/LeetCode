class Solution {
public:
    int linear(vector<int> nums,int l, int r) {
        for(int i=l+1;i<=r;i++) {
            if(nums[i-1]>nums[i])
                return nums[i];
        }
        return nums[l];
    }
    int findMin(vector<int>& nums) {
        return linear(nums,0,nums.size()-1);
    }
};