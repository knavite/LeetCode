class Solution {
public:
    int candy(vector<int>& a) {
        int n;
    	n=a.size();
    	int choco[n];
    	for(int i=0;i<n;i++) {
    		if(i!=0) {
    			if(a[i]>a[i-1]) 
    				choco[i] = choco[i-1]+1;
    			else
    				choco[i] = 1;
    		}
    		else
    			choco[i]=1;
    	}
    	int sum=choco[n-1];
    	//cout<<sum<<" ";
    	for(int i=n-1;i>0;i--) {
    		if(a[i-1]>a[i])
    			choco[i-1] = max(choco[i-1],choco[i]+1);
    		sum+=choco[i-1];
    		//cout<<a[i-1]<<" ";
    	}
        return sum;
    }
};