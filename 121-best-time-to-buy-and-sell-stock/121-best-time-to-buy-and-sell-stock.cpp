class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        int mini = prices[0];
        int profit = INT_MIN;
        int n = prices.size();
        
        for(int i = 1; i < n; i++) {
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]);
        }
        
        return profit < 0 ? 0 : profit;
        */
        
        int maxProfit = 0;
        int maxCurrProfit = 0;
        
        for(int i = 1; i < prices.size(); i++) {
            maxCurrProfit = max(0, maxCurrProfit += prices[i] - prices[i-1]);
            maxProfit = max(maxProfit, maxCurrProfit);
        }
        
        return maxProfit;
    }
};