class Solution {
public:
    int totalNQueens(int n) {
        int res;
        vector<int> cols;
        return totalNQueens(n,cols);
    }
    
    bool valid(vector<int> cols,int x,int y) {
        for(int i=0;i<cols.size();i++) {
            if(cols[i]==x)
                return false;
            else if(abs(cols[i]-x)==abs(i-y))
                return false;
        }
        return true;
    }
    int totalNQueens(int n,vector<int> cols) {
        if(cols.size()==n)
            return 1;
        else {
            int res=0;
            for(int i=0;i<n;i++) {
                int curr = cols.size();
                if(valid(cols,i,curr)) {
                    cols.push_back(i);
                    res+=totalNQueens(n,cols);
                    cols.pop_back();
                }
            }
            return res;
        }
    }
};