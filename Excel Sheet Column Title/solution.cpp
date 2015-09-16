class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while(n>0) {
            n--;
            int mod = n%26;
            s.push_back('A'+mod);
            n=n/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};