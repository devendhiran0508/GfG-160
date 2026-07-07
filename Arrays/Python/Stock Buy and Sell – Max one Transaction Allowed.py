class Solution:
    def maxProfit(self, prices):
        # code here
        minSoFar = prices[0]
        res = 0
        
        for i in range(1, len(prices)):
            minSoFar = min(minSoFar, prices[i])
            
            res = max(res, prices[i] - minSoFar)
        return res
        
