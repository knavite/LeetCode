class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        bool flag = false;
        if(n<0) {
            flag = true;
            n=-1*n;
        }
        if(n==1)
            return flag ? 1.0/x : x;
        else {
            double val = myPow(x,n/2);
            val = val*val;
            if(n%2==1) {
                val = val * x;
            }
            return flag ? 1.0/val : val;
        }
    }
};