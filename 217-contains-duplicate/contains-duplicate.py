class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        i=0
        m={}
        while i<len(nums):
            
            if nums[i] in m:
                return True
            m[nums[i]]=1 
            i+=1   

        return False    

        