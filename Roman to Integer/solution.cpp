#include <map>
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m['M'] = 1000;
        m['D'] = 500;
        m['C'] = 100;
        m['L'] = 50;
        m['X'] = 10;
        m['V'] = 5;
        m['I'] = 1;
        int len = s.size();
        int sum = 0;
        for(int i=0;i<len;i++) {
            if(s.at(i)=='I' && i+1<len && (s.at(i+1)=='V' || s.at(i+1)=='X'))
                sum+= -1*m[s.at(i)];
            else if (s.at(i)=='X' && i+1<len && (s.at(i+1)=='L' || s.at(i+1)=='C'))
                sum+= -1*m[s.at(i)];
            else if (s.at(i)=='C' && i+1<len && (s.at(i+1)=='D' || s.at(i+1)=='M'))
                sum+= -1*m[s.at(i)];
            else
                sum+= m[s.at(i)];
        }
        return sum;
    }
};