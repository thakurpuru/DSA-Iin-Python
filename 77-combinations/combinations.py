class Solution(object):
    def combine(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        res=[]

        def backtrack(path,start):
            if len(path)==k:
                res.append(path)
                return
            for i in range(start, n+1):
                backtrack(path+[i],i+1)

        backtrack([],1)
        return res
        