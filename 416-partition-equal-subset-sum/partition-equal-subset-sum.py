class Solution(object):
    def canPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        total=sum(nums)
        if total%2!=0: return False
        target=total//2
        dp=[False]*(target+1)
        dp[0]=True
        for n in nums:
            for i in range(len(dp)-1,n-1,-1):
                if dp[i]: continue
                if dp[i-n]: dp[i]=True
                if dp[-1]: return True

        return False

        