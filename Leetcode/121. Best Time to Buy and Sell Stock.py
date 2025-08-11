class Solution(object):
    def maxProfit(self, prices):
        minPrice = prices[0]
        profit = 0
        for i in range(len(prices)):
            minPrice = min(minPrice,prices[i])
            profit = max(profit, prices[i]-minPrice)
        return profit
        
