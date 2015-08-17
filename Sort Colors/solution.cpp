class Solution {
public:
    void swap(int &a,int &b) {
        int t=a;
        a=b;
        b=t;
    }
    void sortColors(vector<int>& nums) {
        int r=0,b=nums.size()-1,w=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[w]==0) {
                swap(nums[r],nums[w]);
                w++,r++;
            }
            else if(nums[w]==1) 
                w++;
            else {
                swap(nums[b],nums[w]);
                b--;
            }
        }
    }
};