class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        ans=0
        for i in range(31):
            x=0
            y=0
            for j in range(n):
                if nums[j] & (1<<i)!=0:
                    x+=1
                if j>=1 and (j&(1<<i))!=0:
                    y+=1
            if x>y:
                ans|=(1<<i)
        return ans
       
        
        