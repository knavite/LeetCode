class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]] = 1;
        }
        int max=0;
        for(int i=0;i<nums.size();i++) {
            int left=nums[i]-1,right=nums[i]+1;
            int count=0;
            while(m[left]==1) {
                m[left]=0;
                count++;
                left--;
            } 
            while(m[right]==1) {
                m[right]=0;
                count++;
                right++;
            } 
            count++;
            if(count>max)
                max=count;
        }
        return max;
    }
};