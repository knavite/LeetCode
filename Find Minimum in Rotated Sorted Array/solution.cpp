class Solution {
public:
    int findMin(vector<int>& nums) {
        int r=nums.size()-1;
        int l=0;
        while(l<=r) {
            int mid = (l+r)/2;
            if(nums[mid]<=nums[l] && nums[mid]<=nums[r] && mid >0 && nums[mid-1]>nums[mid])
                return nums[mid];
            else if(nums[mid]<=nums[l] && nums[mid]<=nums[r] && mid==0 )
                return nums[mid];
            else if(nums[mid]>=nums[l] && nums[mid]>=nums[r])
                l=mid+1;
             
            else
                r=mid-1;
        }
    }
};