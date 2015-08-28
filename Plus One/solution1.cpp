class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        while(n>=0 && digits[n]==9) digits[n--]=0;
        if(n==-1) {
            digits[0]=1;
            digits.push_back(0);
        }
        else
            digits[n]++;
        return digits;
    }
};