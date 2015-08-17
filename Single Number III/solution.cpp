class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int i=0;i<nums.size();i++) 
            xorr = xorr ^ nums[i];
        int selected=0;
        for(int i=0;i<32;i++) {
            if((xorr&(1<<i))!=0) {
                selected = i;
                break;
            }
        }
        int xor1=0,xor2=0;
        int bitcheck = 1<<selected;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]&bitcheck) {
                xor1 = xor1^nums[i];
            }
            else
                xor2 = xor2^nums[i];
        }
        vector<int> res;
        res.push_back(xor1);
        res.push_back(xor2);
        return res;
    }
};