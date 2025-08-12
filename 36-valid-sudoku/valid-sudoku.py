class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        table={
            "1":[],"2":[],"3":[],"4":[],"5":[],"6":[],"7":[],"8":[],"9":[]
        }
        for i in range(9):
            for j in range(9):
                if board[i][j]==".":
                    continue
                num=board[i][j]
                if len(table[num])==0:
                    table[num].append((i,j))
                else:
                    lis=table[num]
                    for k in range(len(lis)):
                        if lis[k][0]==i or lis[k][1]==j or (lis[k][0]//3 == i//3) and (lis[k][1]//3 == j//3):
                            return False
                    table[num].append((i,j))
        return True
