class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {

            // Cheapest buying price seen so far
            min_val = min(min_val, prices[i]);

            // Profit if we sell today
            int currentProfit = prices[i] - min_val;

            // Best profit so far
            profit = max(profit, currentProfit);
        }

        return profit;
    }
};