#include <iostream>
#include <cstdio>
using namespace std;

int gcd (int a, int b) {
	while (b>0) 
	{
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}
void rotate(int* nums, int numsSize, int k) {
	
	k=k%numsSize;
	if(k==0)
		return;
    int set = gcd(numsSize,k);
	for(int i=0;i<set;i++) {
		int j=(numsSize/k)*k-(k-i);
		if(j<0)
			j=j+numsSize;
		int t = nums[(j+k)%numsSize];
		for(;j!=(((numsSize/k)*k)+i)%numsSize;)
		{
			nums[(j+k)%numsSize]=nums[j];
			j=j-k;
			if(j<0)
				j=j+numsSize;
		}
		nums[(j+k)%numsSize]=t;		
	}
}

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) 
		cin>>arr[i];
	rotate(arr,n,k);
	for(int i=0;i<n;i++) 
		cout<<arr[i]<<" ";
	cout<<endl;
}