#include <iostream>
#include <cstdio>
using namespace std;

void swap(int nums[],int start,int end,int d)
{
	for(int i=0;i<d;i++) {
		int t=nums[start+i];
		nums[start+i]=nums[end+i];
		nums[end+i]=t;
	}
}
void rotateLeft(int* nums, int numsSize, int k) {
	if(k==0 || k==numsSize)
		return;
	if(numsSize-k==k)
	{
		swap(nums,0,k,k);
		return;
	}
	if(k<numsSize-k) {
		swap(nums,0,numsSize-k,k);
		rotateLeft(nums,numsSize-k,k);
	}
	else {
		swap(nums,0,k,numsSize-k);
		rotateLeft(nums+numsSize-k,k,2*k-numsSize);
	}
}

void rotateRight(int* nums, int numsSize, int k) {
	if(k==0 || k==numsSize)
		return;
	if(numsSize-k==k)
	{
		swap(nums,0,k,k);
		return;
	}
	if(numsSize-k<k) {
		swap(nums,0,k,numsSize-k);
		rotateRight(nums,k,numsSize-k);
	}
	else {
		swap(nums,0,numsSize-k,k);
		rotateRight(nums+k,numsSize-k,numsSize-2*k);
	}
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