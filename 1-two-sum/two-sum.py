class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mp={}
        for i in range(len(nums)):
            a=mp.get(target-nums[i],-1)
            if a!=-1:
                return [a,i]
            mp[nums[i]]=i
        return -1
        