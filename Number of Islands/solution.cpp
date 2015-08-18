class Solution {
public:
    int issafe(int i,int j,int v[],int row,int col) {
        if(i+v[0]>=0 && i+v[0]<row && j+v[1]>=0  && j+v[1]<col)
            return 1;
        else
            return 0;
    }
    void cover(vector<vector<char>>& grid,int i,int j,int row,int col) {
        int valid[4][2] = 
        {
            {1,0},
            {-1,0},
            {0,1},
            {0,-1}
        };
        grid[i][j]=0;
        for(int ii=0;ii<4;ii++) {
            if(issafe(i,j,valid[ii],row,col) && grid[i+valid[ii][0]][j+valid[ii][1]]=='1')
                cover(grid,i+valid[ii][0],j+valid[ii][1],row,col);
        }
    }    
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col;
        if(row>0)
            col = grid[0].size();
        else 
            return 0;
        int valid[2][4] = 
        {
            {1,-1,0,0},
            {0,0,1,-1}
        };
        int cnt=0;
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                if(grid[i][j]=='1') {
                    cover(grid,i,j,row,col);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};