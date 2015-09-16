class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l=0,r=citations.size()-1;
        int n=citations.size();
        int maxV = 0;
        while(l<=r) {
            int mid = (l+r)/2;
            if(citations[mid]>=n-mid) {
                if(n-mid>maxV)
                    maxV=n-mid;
            }
            if(citations[mid]>n-mid) {
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return maxV;
    }
};