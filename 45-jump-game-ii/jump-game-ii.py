class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        jump=0
        near=0
        far=0
        while far<n-1:
            max_reach=0
            for i in range(near,far+1):
                max_reach=max(max_reach,i+nums[i])
            near=far+1
            far=max_reach
            jump+=1
        return jump
        

        


        