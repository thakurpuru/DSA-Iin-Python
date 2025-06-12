class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i=0
        count=0
        k=0
        m={}
        while k<len(nums):
            m[nums[k]]=k
            k+=1
        j=len(nums)-1
        num=sorted(nums)
        while i<=j:
            mid=(i+j)/2
            if(num[mid]<target):
                i=mid+1
            elif (num[mid]>target):
                j=mid-1
            else :
                count=1
                break
        if count==0:
            return -1
        return m[target]           
        