class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> cols;
        solveNQueens(n,res,cols);
        return res;
    }
    
    bool valid(const vector<int>& cols,int x,int y) {
        for(int i = 0;i<cols.size();i++) {
            if(cols[i]==x)
                return false;
            if(abs(cols[i]-x)==abs(y-i))
                return false;
        } 
        return true;
    }
    
    void generateRes(vector<vector<string>>& res,vector<int> cols) {
        int n=cols.size();
        vector<string> t;
        for(int i=0;i<n;i++) {
            string s;
            for(int j=0;j<n;j++) {
                if(i==cols[j])
                    s.push_back('Q');
                else
                    s.push_back('.');
            }
            t.push_back(s);
        }
        res.push_back(t);
    }
    
    void solveNQueens(int n,vector<vector<string>>& res,vector<int>& cols) {
        if(cols.size()==n) {
            generateRes(res,cols);
        }
        else {
            int curr = cols.size();
            for(int  i = 0;i<n;i++) {
                if(valid(cols,i,curr)) {
                    cols.push_back(i);
                    solveNQueens(n,res,cols);
                    cols.pop_back();
                }
            }
        }
    }
};