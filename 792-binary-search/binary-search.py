class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i=0
        j=len(nums)-1
        while i<=j:
            mid=(i+j)//2
            if target<nums[mid]:
                j=mid-1
            elif target>nums[mid]:
                i=mid+1
            else:
                return mid
        return -1

            