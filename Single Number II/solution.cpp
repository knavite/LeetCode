class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        for(int i=0;i<nums.size();i++) {
            twos = twos | (ones & nums[i]);
            ones = ones ^ nums[i];
            int threes = twos & ones;
            ones = ones & ~threes;
            twos = twos & ~threes;
        }
        return ones;
    }
};