class Solution(object):
    def updateMatrix(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[List[int]]
        """
        rows,cols=len(mat),len(mat[0])
        res=[[float('inf')]*cols for _ in range(rows)]
        q=deque()
        for i in range(rows):
            for j in range(cols):
                if mat[i][j]==0:
                    res[i][j]=0
                    q.append((i,j))
        
        direction=[(-1,0),(1,0),(0,1),(0,-1)]        
        while q:
            r,c=q.popleft()
            for dr,dc in direction:
                nr,nc=r+dr,c+dc
                if 0<= nr <rows and 0<= nc <cols:
                    if res[r][c]+1<res[nr][nc]:
                        res[nr][nc]=res[r][c]+1
                        q.append((nr,nc))
        return res



        