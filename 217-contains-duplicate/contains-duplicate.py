class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        i=0
        j=1
        nums.sort()
        while j<len(nums):
            
            if nums[i]==nums[j]:
                return True
            else:
                i+=1
                j+=1
               

        return False    

        