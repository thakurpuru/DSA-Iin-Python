class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sm=0
        ans=-1e9
        for num in nums:
            sm+=num
            ans=max(sm,ans)
            if sm<0:
                sm=0
        return ans
        