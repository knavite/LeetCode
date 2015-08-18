class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=0,j=0;
        int row = matrix.size();
        int col = matrix[0].size();
        while(1) {
            int t = matrix[i][j];
            matrix[i][j] = matrix[row-j-1][i];
            matrix[row-j-1][i]=matrix[row-i-1][col-j-1];
            matrix[row-i-1][col-j-1]=matrix[j][col-i-1];
            matrix[j][col-i-1]=t;
            j++;
            if(j>col-2-i)
            {
                i++;
                j=i;
            }
            if(i>=row/2)
                break;
        }
    }
};