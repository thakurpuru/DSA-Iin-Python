class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        if n-k==0:
            return nums
        if n-k<0:
            l=k%n
        else:
            l=k
        l2=nums[:n-l]
        for i in range(n-l):
            nums.pop(0)
        nums.extend(l2)
        
        