class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum3(int k, int n) {
        int end = min(9,n);
        int arr[end];
        for(int i=1;i<=end;i++) 
            arr[i-1]=i;
        int data[k];
        combinationSum3(arr,data,0,end,0,k,n);
        return res;
    }
    void combinationSum3(int arr[],int data[],int start,int end,int index,int k,int n) {
         if(index==k) {
             int sum = 0;
             vector<int> v;
             for(int i=0;i<k;i++) {
                 sum+=data[i];
                 v.push_back(data[i]);
             }
             if(sum==n)
                res.push_back(v);
         }
         else {
             for(int i=start;i<end/* && end-i>=k-index*/;i++) {
                 data[index] = arr[i];
                 combinationSum3(arr,data,i+1,end,index+1,k,n);
             }
         }
    }
};