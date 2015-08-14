class Solution {
public:
    int titleToNumber(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++) {
            int val = (int) (s.at(i) - 'A') +1;
            sum = sum*26 + val;
            
        }
        return sum;
    }
};