class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minBuy=prices[0]
        maxprofit=0
        for i in range(1,len(prices)):
            profit=prices[i]-minBuy
            if profit>0:
                maxprofit+=profit
                minBuy=prices[i]
            if minBuy>prices[i]:
                minBuy=prices[i]
        return maxprofit

        