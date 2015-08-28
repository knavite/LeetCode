class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> v;
        if(numRows>0) {
            v.push_back(1);
            res.push_back(v);
        }
        for(int i=1;i<numRows;i++) {
            vector<int> newV;
            newV.push_back(v[0]);
            for(int i=0;i<v.size()-1;i++) {
                newV.push_back(v[i]+v[i+1]);
            }
            newV.push_back(v[v.size()-1]);
            res.push_back(newV);
            v=newV;
        }
        return res;
    }
};