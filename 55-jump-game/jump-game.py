class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n=len(nums)
        if n==1:
            return True
        max_reach=0
        for i in range(n):
            if i>max_reach:
                return False
            max_reach=max(max_reach,i+nums[i])
            if max_reach >=n-1:
                return True
        return False
        # dp=[None]*n
        # def check(i):
        #     if i==n-1:
        #         return True
        #     if i>=n:
        #         return False
        #     if dp[i] is not None:
        #         return dp[i]
        #     for k in range(1,nums[i]+1):
        #         if check(i+k):
        #             dp[i]=True
        #             return True
        #     dp[i]=False
        #     return False
        # return check(0)
        
        


        