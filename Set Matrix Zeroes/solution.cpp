class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int flagr[row];
        int flag[col];
        memset(flag,0,col*sizeof(int));
        memset(flagr,0,row*sizeof(int));
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                if(matrix[i][j]==0 && flagr[i]==0) {
                    flag[j]=1;
                    flagr[i]=1;
                }
                else if(matrix[i][j]==0) {
                    flag[j]=1;
                }
                    
            }
            if(flagr[i]==1) setRowZeroes(matrix[i]);
        }
        
        for(int i=0;i<col;i++) {
            if(flag[i])
                setColZeroes(matrix,i);
        }
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    void setRowZeroes(vector<int>& matrix) {
        for(int i=0;i<matrix.size();i++)    
            matrix[i]=0;
    }
    void setColZeroes(vector<vector<int>>& matrix,int j) {
        for(int i=0;i<matrix.size();i++)    
            matrix[i][j]=0;
    }
};