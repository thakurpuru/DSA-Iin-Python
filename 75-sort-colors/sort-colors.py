class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        c0,c1,c2=0,0,0
        for num in nums:
            if num==0:
                c0+=1
            elif num==1:
                c1+=1
            else:
                c2+=1
        idx=0
        for i in range(c0):
            nums[idx]=0
            idx+=1
        for i in range(c1):
            nums[idx]=1
            idx+=1
        for i in range(c2):
            nums[idx]=2
            idx+=1
        