class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        def fact(n):
            if n==0 or n==1:
                return 1
            return n*fact(n-1)
        r=m+n-2
        return fact(r)//(fact(m-1)*fact(n-1))