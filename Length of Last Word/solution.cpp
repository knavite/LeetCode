class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length()-1;
        int startL=0,endL=0;
        if(len>=0) {
            while(len>= 0 && !isalpha(s[len])) len--;
            endL = len;
            while(len>= 0 && isalpha(s[len])) len--;
            startL = len;
        }
        return endL - startL;
    }
};