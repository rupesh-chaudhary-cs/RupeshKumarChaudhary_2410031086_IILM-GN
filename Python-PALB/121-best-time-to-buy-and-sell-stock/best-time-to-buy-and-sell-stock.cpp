class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=INT_MIN;
        int profit=0;
        int currProfit=0;
        for(int i=1;i<prices.size();i++){
            currProfit=prices[i]-min;
            if(currProfit>profit){
                profit=currProfit;
            }
            if(prices[i]<min){
                min=prices[i];
            }
            
        }
        return profit;
    }
};