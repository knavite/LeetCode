class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int dp[nums.size()];
        for(int i=0;i<nums.size()-1;i++) {
            if(i==0) {
                dp[i]=nums[i];
            }
            else if (i==1)
                dp[i]=max(nums[i],dp[i-1]);
            else
                dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        
        int dp2[nums.size()];
        for(int i=1;i<nums.size();i++) {
            if(i==1) {
                dp2[i]=nums[i];
            }
            else if (i==2)
                dp2[i]=max(nums[i],dp2[i-1]);
            else
                dp2[i]=max(nums[i]+dp2[i-2],dp2[i-1]);
        }
        return max(dp[nums.size()-2],dp2[nums.size()-1]);
    }
};