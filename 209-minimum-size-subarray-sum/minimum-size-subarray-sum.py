class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        if target in nums:
            return 1
        n_sum=0
        i=0
        j=0
        ans=float('inf')
        while j<len(nums):
            n_sum+=nums[j]
            while i<=j and n_sum>=target:
                if n_sum>=target:
                    ans=min(ans,j-i+1)
                n_sum-=nums[i]
                i+=1
            j+=1
        if ans==float('inf'):
            return 0
        return ans
