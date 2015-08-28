class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==nums[i+1]) {
                nums[k++]=nums[i];
                if(i<nums.size()-1)
                    nums[k++]=nums[i+1];
                i++;
                while(i<nums.size()-1 && nums[i]==nums[i+1]) i++;
                //i++;
            }
            else 
                nums[k++]=nums[i];
        }
        return k;
    }
};