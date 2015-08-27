class Solution {
public:
    int missingNumber(vector<int> nums) {
        int foundZero = false,foundN=false,flipZero=false;
        for(int i=0;i<nums.size();i++) {
            int curr;
            if(nums[i]<0) curr = nums[i]*-1;
            else curr=nums[i];
            if(curr==0) foundZero = true;
            if(curr==nums.size()) {
                foundN = true;
                continue;
            }
            if(nums[curr]==0) flipZero = true;
            nums[curr]*=-1;
        }
        if(!foundZero) return 0;
        if(!foundN) return nums.size();
        for(int i=0;i<nums.size();i++) {
            cout<<nums[i];
            if(nums[i]==0 && flipZero) continue;
            if(nums[i]>=0) return i; 
        }
        
    }
};