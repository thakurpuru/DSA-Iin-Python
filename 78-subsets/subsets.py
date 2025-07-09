class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res=[]
        def backtrack(path,start):
            res.append(path[:])
            for i in range(start,len(nums)):
                path.append(nums[i])
                backtrack(path,i+1)
                path.pop()
        backtrack([],0)
        return res

        