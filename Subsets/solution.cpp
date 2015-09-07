class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++) {
            int bit = 1;
            vector<int> v;
            for(int j=0;j<n;j++) {
                if(i & bit) 
                    v.push_back(nums[j]);
                bit=bit<<1;
            }
            res.push_back(v);
        }
        return res;
    }
};