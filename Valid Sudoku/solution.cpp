class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool res= true;
        for (int i=0;i<9;i++) {
            res = res && check(board[i]);
            res = res && checkCol(board,i);
        }
        for(int i=0;i<9;i=i+3) {
            for(int j=0;j<9;j=j+3) {
                res = res && checkSq(board,i,j);
            }
        }
        return res;
    }
    
    bool checkSq(vector<vector<char>>& v,int x,int y) { 
        int freq[10] = {0};
        for(int i=0;i<=2;i++) {
            for(int j=0;j<=2;j++) {
                if(v[x+j][y+i]!='.') {
                    freq[v[x+j][y+i]-'0']++;
                    if(freq[v[x+j][y+i]-'0']>1)
                        return false;
                }
            }
        }
        return true;
    }
    bool checkCol(vector<vector<char>>& v,int j) {
        int freq[10] = {0};
        for (int i=0;i<9;i++) {
            if(v[i][j]!='.') {
                freq[v[i][j]-'0']++;
                if(freq[v[i][j]-'0']>1)
                    return false;
            }
        }
        return true;
    }
    
    bool check(vector<char> v) {
        int freq[10] = {0};
        for (int i=0;i<9;i++) {
            if(v[i]!='.') {
                freq[v[i]-'0']++;
                if(freq[v[i]-'0']>1)
                    return false;
            }
        }
        return true;
    }
};