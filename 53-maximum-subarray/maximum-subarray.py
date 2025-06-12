class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result=-sys.maxint
        curr=0
        for i in nums:
            curr+=i
            result=max(result,curr)
            if curr<0:
                curr=0

        return result        