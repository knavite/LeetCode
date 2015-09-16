class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int hi = 0;
        int n=citations.size();
        for(int i=n-1;i>=0;i--) {
            int cur=n-i;
            if(cur<=citations[i] && hi<cur)
                hi = cur;
                
        }
        return hi;
    }
};