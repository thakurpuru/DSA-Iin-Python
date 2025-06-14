class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        li=[]
        for i  in range(0,len(nums)):
            a=target-nums[i]
            if a in nums :
                ind=nums.index(a)
                if ind!=i:
                    li.append(i)
                    li.append(ind)
                    return li
        return li

        