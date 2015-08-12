#include<iostream>
#include<vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int binarySearch(vector<vector<int> > nums,int i,int j,int val) {
	//cout<<i<<" ij "<<j<<endl;
	while(i<=j) {
		
		int mid = (i+j)/2;//fprintf(stderr," %d %d %d \n",i,j,nums[mid-1][0]);
		if((mid==0 && nums[mid][0]==val) ||  (nums[mid][0]==val && nums[mid-1][0]<val) )
			return mid;
		else if(nums[mid][0]<val)
			i=mid+1;
		else
			j=mid-1;
	}
	return -1;
}

int comp(vector<int> i,vector<int> j) {
	return i[0]<j[0];
}

vector<vector<int> > fourSum(vector<int>& a, int target) { 
    vector<vector<int> > res;
	//sort(a.begin(),a.end());
	int numsSize = a.size();
	vector<vector<int> > aSquare;
	int kk=0;
	for(int i=0;i<numsSize;i++) {
		for(int j=i+1;j<numsSize;j++) {
			vector<int> temp;
			temp.push_back(a[i]+a[j]);
			temp.push_back(a[i]);
			temp.push_back(a[j]);
			aSquare.push_back(temp);
			kk++;
		}
	}
	sort(aSquare.begin(),aSquare.end(),comp);
	for(int i=0;i<kk;i++) {
		int diff = target - aSquare[i][0];
		fprintf(stderr," %d new",aSquare[i][0]);
		int found = binarySearch(aSquare,i+1,kk-1,diff);
		if(found!=-1) {
			while(found<kk && aSquare[found][0] ==diff) {
				vector<int> temp;
				temp.push_back(aSquare[i][1]);
				temp.push_back(aSquare[i][2]);
				temp.push_back(aSquare[found][1]);
				temp.push_back(aSquare[found][2]);
				sort(temp.begin(),temp.end());
				res.push_back(temp);
				found++;fprintf(stderr," gere %d ",found);
			}
		}
	}
	return res;
}

int main() {
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++) {
		int t;
		cin>>t;
		a.push_back(t);
	}
	int target;
	cin>>target;
	int retSize;
	vector<vector<int> > result = fourSum(a,target);
	for(int i=0;i<result.size();i++) {
		cout<<result[i][0]<< " "<<result[i][1]<< " "<<result[i][2]<< " "<<result[i][3]<< " "<<endl;
	}
	return 0;
}