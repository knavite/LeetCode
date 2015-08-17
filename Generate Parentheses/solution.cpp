#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        string s;
        generateParenthesis(s,n,0,0);
        return res;
    }
    void generateParenthesis(string s,int n,int open,int unclosed) {
        if(s.size()==2*n) res.push_back(s);
        else {
            if(unclosed>0) {
                s.append(")");
                generateParenthesis(s,n,open,unclosed-1);
				s = s.substr(0, s.size()-1);
            }
            if(open<n) {
                s.append("(");
                generateParenthesis(s,n,open+1,unclosed+1);
				
            }
                
        }
            
    }
};

int main() {
	Solution s;
	vector<string> res = s.generateParenthesis(3);
	for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
}