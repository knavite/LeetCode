class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum, max = INT_MAX;
        for(int i=0;i<nums.size();i++) {
            int j=i+1,k=nums.size()-1;
            while(j<k) {
                if(abs(target - nums[i]-nums[j]-nums[k])<max) {
                    max= abs(target - nums[i]-nums[j]-nums[k]);
                    sum =  nums[i]+nums[j]+nums[k];
                }
                if(target<nums[i]+nums[j]+nums[k])
                    k--;
                else
                    j++;
            }
        }
        return sum;
    }
};