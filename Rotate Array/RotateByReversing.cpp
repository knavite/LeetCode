#include <iostream>
#include <cstdio>
using namespace std;

void reverse(int nums[],int start,int end)
{
	for(int i=start;i<=(start+end)/2;i++) {
		int t=nums[i];
		nums[i]=nums[end-(i-start)];
		nums[end-(i-start)]=t;
	}
}
void rotateLeft(int* nums, int numsSize, int k) {
	k = k%numsSize;
	reverse(nums,0,k-1);
	reverse(nums,k,numsSize-1);
	reverse(nums,0,numsSize-1);
}

void rotateRight(int* nums, int numsSize, int k) {
	k = k%numsSize;
	reverse(nums,0,numsSize-k-1);
	reverse(nums,numsSize-k,numsSize-1);
	reverse(nums,0,numsSize-1);
}

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) 
		cin>>arr[i];
	rotateLeft(arr,n,k);
	cout<<"After Left Rotation : ";
	for(int i=0;i<n;i++) 
		cout<<arr[i]<<" ";
	cout<<endl;
	rotateRight(arr,n,k);
	cout<<"After Right Rotation : ";
	for(int i=0;i<n;i++) 
		cout<<arr[i]<<" ";
	cout<<endl;
}