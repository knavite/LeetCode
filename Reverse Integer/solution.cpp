class Solution {
public:
    int reverse(int x) {
        unsigned long long rev = 0;
        bool flag = false;
        if(x<0) {
            flag=true;
            x*=-1;
        }
        while(x>0) {
            rev = rev*10+x%10;
            x/=10;
        }
        if(rev>2147483647) rev = 0;
        if(flag) rev*=-1;
        return (int)rev;
    }
};