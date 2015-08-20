class Solution {
public:
    bool isHappy(int n) {
        map<int,int> m;
        int flag=0;
        while(m[n]==false) {
            m[n]=true;
            int newN=0;
            while(n!=0) {
                int d=n%10;
                newN+=d*d;
                n=n/10;
            }
            n=newN;
            if(n==1) {
                flag=1;
                break;
            }
        }
        if(flag) return true;
        else return false;
    }
};