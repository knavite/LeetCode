class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        if(nums.size()<1) return 0;
        else nums[index++] = nums[0];
        for(int i=1;i<nums.size();i++) {
            if(nums[i]==nums[index-1])
                continue;
            else
                nums[index++] = nums[i];
        }
        return index;
    }
};