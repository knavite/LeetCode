class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n,0));
        int rowStart=0,rowEnd=n,colStart=0,colEnd=n;
        int val=1;
        n=n*n;
        while(val<=n) {
            for(int i=colStart;i<colEnd && val<=n;i++) 
                res[rowStart][i] = val++;
            for(int i=rowStart+1;i<rowEnd && val<=n;i++)
                res[i][colEnd-1] = val++;
            for(int i=colEnd-2;i>=colStart && val<=n;i--)
                res[rowEnd-1][i] = val++;
            for(int i=rowEnd-2;i>rowStart && val<=n;i--)
                res[i][colStart] = val++;
            rowStart++;rowEnd--;colStart++;colEnd--;
        }
        return res;
    }
};