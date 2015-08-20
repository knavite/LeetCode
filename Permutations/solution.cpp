class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        return permute(nums,0,nums.size());
    }
    
    vector<vector<int>> permute(vector<int>& nums,int start,int end) {
        if(start == end-1) {
            vector<int> temp;
            for(int i=0;i<end;i++)
                temp.push_back(nums[i]);
            res.push_back(temp);
        }
        else {
            for(int i=start;i<end;i++) {
                int t = nums[start];
                nums[start] = nums[i];
                nums[i] = t;
                permute(nums,start+1,end);
                t = nums[start];
                nums[start] = nums[i];
                nums[i] = t;
            }
        }
        return res;
    }
};