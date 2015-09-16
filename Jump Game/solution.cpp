class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxr = 0;
        for(int i=0;i<nums.size() && i<=maxr;i++) {
            maxr = max(maxr,nums[i]+i);
        }
        return maxr>=nums.size()-1;
    }
};