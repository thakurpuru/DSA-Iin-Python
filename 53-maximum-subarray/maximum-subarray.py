class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result=float('-inf')
        curr=0
        i=0
        while i<len(nums):
            curr+=nums[i]
            if curr>result:
                result=curr
            if curr<0:
                curr=0
            i+=1
        return result        