class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        n=len(board)
        m=len(board[0])
        vis=[[False]*m for _ in range(n)]
        mark=[]
        for i in range(n):
            for j in range(m):
                if board[i][j]==word[0]:
                    mark.append((i,j))
        if len(mark)==0:
            return False
        def backtrack(i,j,idx):
            if idx==len(word):
                return True
            direction=[(1,0),(0,1),(-1,0),(0,-1)]
            for x,y in direction:
                nx,ny=i+x,j+y
                if 0<= nx <n and 0 <= ny < m and not vis[nx][ny] and board[nx][ny]==word[idx]:
                    vis[nx][ny]=True
                    if backtrack(nx, ny, idx + 1):
                        return True

                    vis[nx][ny]=False
            return False
                    
        for i,j in mark:
            vis=[[False]*m for _ in range(n)]
            vis[i][j]=True
            if backtrack(i,j,1):
                return True
            
        return False
        