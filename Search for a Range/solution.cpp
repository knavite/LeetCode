class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int left=-1,right=-1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(mid==0 && nums[mid]==target || mid > 0 && nums[mid]==target && nums[mid-1]<target)
            {
                left = mid;
                break;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        
        l=0,r=nums.size()-1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(mid==nums.size()-1 && nums[mid]==target || nums[mid]==target && nums[mid+1]>target) {
                right = mid;
                break;
            }
                
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        vector<int> v;
        v.push_back(left);
        v.push_back(right);
        return v;
    }
};