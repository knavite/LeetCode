class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        if(nums.size()==1) return 0;
        if(nums.size()==2) return nums[0]>nums[1] ? 0 : 1;
        while(l<=r) {
            cout<<l<<" "<<r<<endl;
            int mid = (l+r)/2;
            if(mid!=0 && mid != nums.size()-1 && nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            if(mid==0 && nums[mid]>nums[mid+1])
                return mid;
            if(mid==0 && nums[mid]<nums[mid+1])
                return mid+1;
            if(mid==nums.size()-1 && nums[mid]>nums[mid-1])
                return mid;
            if(mid==nums.size()-1 && nums[mid]<nums[mid-1])
                return mid-1;
            else if(nums[mid]<nums[mid-1])
                r=mid-1;
            else
                l=mid+1;
            
        }
    }
};