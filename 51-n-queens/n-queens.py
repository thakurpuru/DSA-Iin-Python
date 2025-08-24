class Solution(object):
    def solveNQueens(self, n):
        """
        :type n: int
        :rtype: List[List[str]]
        """
        board=[['.']*n for _ in range(n)]
        res=[]
        def issafe(i,j,board):
            for row in range(i):
                if board[row][j]=='Q':
                    return False
            
            r,c=i-1,j-1
            while r>=0 and c>=0:
                if board[r][c]=='Q':
                    return False
                r-=1
                c-=1
            
            k,l=i-1,j+1
            while k>=0 and l<n:
                if board[k][l]=='Q':
                    return False
                k-=1
                l+=1
            return True

        def QueenPlace(row,board):
            if row==n:
                res.append(["".join(r) for r in board])
                return
            for j in range(n):
                if issafe(row,j,board):
                    board[row][j]='Q'
                    QueenPlace(row+1,board)
                    board[row][j]='.'
        QueenPlace(0,board)
        return res
        