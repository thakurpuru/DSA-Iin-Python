class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        count=0
        su_m=0
        ans=float('-inf')
        i,j=0,0
        while i<len(nums):
            su_m+=nums[i]
            
            if i-j+1==k:
                avg=su_m/float(k)
                if ans<avg:
                    ans=avg
                su_m-=nums[j]
                j+=1
            i+=1
        return ans
                
                
            
