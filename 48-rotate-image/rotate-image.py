class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        def solve(i,j,n):
            a=matrix[i][j]
            for _ in range(4):
                c=j
                j=n-i-1
                i=c
                b=matrix[i][j]
                matrix[i][j]=a
                a=b

        n=len(matrix)
        count=n
        for i in range(n//2):
            for j in range(i,count-1):
                solve(i,j,n)
            count-=1
            
        