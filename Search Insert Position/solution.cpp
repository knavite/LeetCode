class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size();
        while(l<=r) {
            int mid = (l+r)/2;
            if(nums[mid]==target || mid!=0 && nums[mid]>target && nums[mid-1]<target)
                return mid;
            else if(mid==nums.size()-1 && nums[mid]<target) return mid+1;
            else if (nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
    }
};