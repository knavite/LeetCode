class Solution {
public:
    int trailingZeroes(int n) {
        unsigned long long d=5;
        int cnt=0;
        while(d<=n) {
            cnt+=n/d;
            d*=5;
        }
        cout<<cnt;
        return cnt;
    }
};