class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        num=sorted(nums)
        i=0
        j=len(num)-1
        while i<=j:
            mid=(i+j)//2
            if target<num[mid]:
                j=mid-1
            elif target>num[mid]:
                i=mid+1
            else:
                return nums.index(target)
        return -1

            