class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int N=prices.size();
        int maxProfit=0;
        int profit;
        int min_price=prices[0];
        for(int i=1;i<N;i++){
            profit=prices[i]-min_price;
            if(profit>maxProfit){
                maxProfit=profit;
            }
            if(prices[i]<min_price){
                min_price=prices[i];
            }
        }
        return maxProfit;
        
    }
};