class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> sub;
        subsets(nums,0,sub);
        return res;
    }
    
    void subsets(vector<int>& nums,int start,vector<int> sub) {
        res.push_back(sub);
        for(int i=start;i<nums.size();i++) {
            if(i!=start && nums[i]==nums[i-1]) continue;
            sub.push_back(nums[i]);
            subsets(nums,i+1,sub);
            sub.pop_back();
        }
    }
};
