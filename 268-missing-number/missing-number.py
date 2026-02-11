class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=int(len(nums))
        total_sum=0
        for i in range(n):
            total_sum+=nums[i]
        sum_n=n*(n+1)//2
        return sum_n-total_sum