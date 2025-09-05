class Solution(object):
    def solveSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        row_set=[set() for _ in range(9)]
        col_set=[set() for _ in range(9)]
        box_set=[set() for _ in range(9)]
        empty=[]
        for i in range(9):
            for j in range(9):
                if board[i][j]!=".":
                    val=board[i][j]
                    row_set[i].add(val)
                    col_set[j].add(val)
                    idx=(i//3)*3+(j//3)
                    box_set[idx].add(val)
                else:
                    empty.append((i,j))
        
                        
        def solver(idx):
            if idx==len(empty):
                return True
            [r,c]=empty[idx]
            box_id=(r//3)*3+(c//3)

            for num in map(str,range(1,10)):
                if num not in row_set[r] and num not in col_set[c] and num not in box_set[box_id]:
                    board[r][c]=num
                    row_set[r].add(num)
                    col_set[c].add(num)
                    box_set[box_id].add(num)
                    if solver(idx+1):
                        return True
                    board[r][c]="."
                    row_set[r].remove(num)
                    col_set[c].remove(num)
                    box_set[box_id].remove(num)

            return False
        solver(0)

        