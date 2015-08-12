class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX,maxprice = 0;
        for(int i=0;i<prices.size();i++) {
            if(prices[i]-min > maxprice)
                maxprice = prices[i]-min;
            if(prices[i]<min)
                min = prices[i];
        }
        return maxprice;
    }
};