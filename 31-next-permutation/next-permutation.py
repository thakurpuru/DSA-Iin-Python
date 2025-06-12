class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        i=len(nums)-2
        pivot=-1
        while i>=0:
            if(nums[i]<nums[i+1]):
                pivot=i
                break
            i-=1
        if(pivot==-1):
            nums.reverse()
            return
        j=len(nums)-1
        while j>pivot:
            if(nums[j]>nums[pivot]):
                nums[j],nums[pivot]=nums[pivot],nums[j] 
                break
            j-=1     

        nums[pivot + 1:] = reversed(nums[pivot + 1:])
