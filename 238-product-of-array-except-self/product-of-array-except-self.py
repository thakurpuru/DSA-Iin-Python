class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n=len(nums)
        prefix=[1]* n
        sufix=[1]* n
        for i in range(1,n):
            prefix[i]=prefix[i-1]*nums[i-1]
        i=n-2
        while i>=0:
            sufix[i]=sufix[i+1]*nums[i+1]
            i-=1
        res=[1]*n
        for i in range(0,n):
            res[i]=sufix[i]*prefix[i]
        return res        