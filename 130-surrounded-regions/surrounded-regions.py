class Solution(object):
    def solve(self, board):
        """
        :type board: List[List[str]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        m=len(board)
        n=len(board[0])
        def dfs(i,j,board):
            if i<0 or i>=m or j<0 or j>=n or board[i][j] !='O' :
                return 
            board[i][j]='S'
            dfs(i+1,j,board)
            dfs(i-1,j,board)
            dfs(i,j+1,board)
            dfs(i,j-1,board)
        for i in range(m):
            dfs(i,0,board)
            dfs(i,n-1,board)
        for j in range(n):
            dfs(0,j,board)
            dfs(m-1,j,board)
        for i in range(m):
            for j in range(n):
                if board[i][j]=='O':
                    board[i][j]='X'
                elif board[i][j]=='S':
                    board[i][j]='O'

                    