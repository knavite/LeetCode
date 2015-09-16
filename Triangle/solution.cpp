class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int h = triangle.size();
        int dp[h];
        for(int i=0;i<h;i++) {
            dp[i] = triangle[h-1][i];
        }
        for(int i=h-2;i>=0;i--) {
            for(int j=0;j<=i;j++) {
                dp[j] = min(dp[j],dp[j+1]) + triangle[i][j];
            }
        }
        return dp[0];
    }
};