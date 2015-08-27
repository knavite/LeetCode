class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int l=0,r=row-1;
        int mid;
        while(l<=r) {
            mid=(l+r)/2;
            if(matrix[mid][0]==target) return true;
            if(mid<r && matrix[mid][0]<target && matrix[mid+1][0]>target) break;
            if(matrix[mid][0]<target) l=mid+1;
            else r=mid-1;
        }
        row=mid;
        l=0,r=col-1;
        while(l<=r) {
            mid=(l+r)/2;
            if(matrix[row][mid]==target) return true;
            if(matrix[row][mid]<target) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};