class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityCount=0,majorityElem;
        if(nums.size()>0) {
            majorityCount=1;
            majorityElem=nums[0];
        }
        for(int i=1;i<nums.size();i++) {
            if(majorityCount==0) {
                majorityCount=1;
                majorityElem=nums[i];
            }
            else if(majorityElem==nums[i])
                majorityCount++;
            else
                majorityCount--;
        }
        return majorityElem;
    }
};