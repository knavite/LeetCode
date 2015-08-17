class Solution {
public:
    string intToRoman(int num) {
        string s;
        while(num>=1000) {
            num-=1000;
            s.append("M");
        }
        if(num>=900) {
            num-=900;
            s.append("CM");
        }
        if(num>=500) {
            num-=500;
            s.append("D");
        }
        if(num>=400) {
            num-=400;
            s.append("CD");
        }
        while(num>=100) {
            num-=100;
            s.append("C");
        }
        if(num>=90) {
            num-=90;
            s.append("XC");
        }
        if(num>=50) {
            num-=50;
            s.append("L");
        }
        if(num>=40) {
            num-=40;
            s.append("XL");
        }
        while(num>=10) {
            num-=10;
            s.append("X");
        }
        if(num>=9) {
            num-=9;
            s.append("IX");
        }
        if(num>=5) {
            num-=5;
            s.append("V");
        }
        if(num>=4) {
            num-=4;
            s.append("IV");
        }
        while(num>=1) {
            num-=1;
            s.append("I");
        }
        return s;
    }
};