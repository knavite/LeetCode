class Solution {
public:
    bool isPalindrome(int x) {
        long long d=1;
        if(x<0) return false;
        while(x>=d) d=d*10;
        d/=10;
        int ten = 10;
        while(d>1) {
            int left = x/d;
            int right = x%ten;
            cout<<left<< " "<<right<<endl;
            if(left!=right)
                return false;
            x=x%d;
            x=x/10;
            d=d/100;
        }
        return true;
    }
};