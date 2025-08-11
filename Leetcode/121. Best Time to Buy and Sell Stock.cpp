class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar = prices[0];
        int profit = 0;

        for (int i = 1; i <  prices.size(); i++) {
            minSoFar = min(minSoFar, prices[i]);
                         
            profit = max(profit, prices[i] - minSoFar);
        }
        return profit;
    }
};
