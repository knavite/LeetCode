#include <iostream>
#include <vector>
using namespace std;
 
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
		while(n>0) {
			n = n & n-1;
			cnt++;
		}
		return cnt;
    }
};

int main() {
	Solution s;
	int n;
	cin>>n;
	cout<<s.hammingWeight(n)<<endl;;
}