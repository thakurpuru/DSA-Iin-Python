class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        res=[]
        m=len(matrix)
        n=len(matrix[0])
        i,j=0,0
        di,dj=0,1
        for k in range(m*n):
            res.append(matrix[i][j])
            matrix[i][j]='#'

            if not 0<=i+di<m or not 0<=j +dj<n or matrix[i+di][j+dj]=='#':
                di,dj=dj,-di
            i+=di
            j+=dj
        return res
            




        