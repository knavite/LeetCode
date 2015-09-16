class Solution {
public:
    vector <vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        combinationSum(candidates,0,target,v);
        return res;
    }
    
    void combinationSum(vector<int>& candidates,int start, int target,vector<int> v) {
        for(int i=start;i<candidates.size();i++) {
            if(candidates[i]==0) continue;
            if(candidates[i]==target) {
                v.push_back(candidates[i]);
                res.push_back(v);
                break;
            }
            else if(candidates[i]<target) {
                vector<int> temp = v;
                temp.push_back(candidates[i]);
                combinationSum(candidates,i,target-candidates[i],temp);
            }
            else break;
        }   
    }
};