class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
        int arr[n],data[k];
        for(int i=1;i<=n;i++)
            arr[i-1]=i;
        combine(arr,data,0,n,0,k);
        return res;
    }
    void combine(int arr[],int data[],int start,int end, int index,int k) {
        //cout<<start<< " "<<index<<endl;
        if(index==k) {
            vector<int> t;
            for(int i=0;i<k;i++)
                t.push_back(data[i]);
            res.push_back(t);
        }
        else {
            for(int i=start;i<end && end-i>=k-index;i++)
            {
                data[index]=arr[i];
                combine(arr,data,i+1,end,index+1,k);
            }
        }
    }
};