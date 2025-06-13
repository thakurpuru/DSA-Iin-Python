class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        j=1
        profit=0
        smallest=prices[0]
        while(j<len(prices)):
            pro=prices[j]-smallest
            if prices[j]<smallest:
                smallest=prices[j]
            if pro>profit:
                profit=pro
            j+=1
        return profit
        