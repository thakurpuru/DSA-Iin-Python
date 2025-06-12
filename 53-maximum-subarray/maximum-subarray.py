class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result=-sys.maxint
        curr=0
        i=0
        while i<len(nums):
            curr+=nums[i]
            result=max(result,curr)
            if curr<0:
                curr=0
            i+=1
        return result        