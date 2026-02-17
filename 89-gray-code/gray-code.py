class Solution(object):
    def grayCode(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        m=2**n
        ans=[]
        
        for i in range(m):
            ans.append(i^(i>>1))
        return ans