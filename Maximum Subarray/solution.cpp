#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0],maxSum = nums[0];
		for(int i=0;i<nums.size();i++) {
			int maxSum = maxSum+nums[i];
			if(nums[i]>maxSum) {
				maxSum = nums[i];
			}
			if(maxSoFar<maxSum)
				maxSoFar=maxSum;
		}
		return maxSoFar;
    }
};

int main() {
	Solution s;
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;i++) {
		int t;
		cin>>t;
		nums.push_back(t);
	}
	cout<<s.maxSubArray(nums)<<endl;;
}