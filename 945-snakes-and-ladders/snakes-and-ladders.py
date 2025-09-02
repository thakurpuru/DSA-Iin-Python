class Solution(object):
    def snakesAndLadders(self, board):
        """
        :type board: List[List[int]]
        :rtype: int
        """
        n=len(board)
        cells={}
        k=1
        dj=1
        j=0    
        for i in range(n-1,-1,-1):
            while j<n and j>=0:
                cells[k]=(i,j)
                j+=dj
                k+=1
            dj=-dj
            j+=dj
        m=n*n+1
        dist=[-1]*m
        dist[1]=0
        que=deque()
        que.append(1)
        while len(que)!=0:
            curr=que.popleft()
            for nxt in range(curr+1,min(curr+6,n*n)+1):
                [r,c]=cells[nxt]
                desti=nxt
                if board[r][c]!=-1:
                    desti=board[r][c]
                if dist[desti]==-1:
                    dist[desti]=dist[curr]+1
                    que.append(desti)
        return dist[n*n]

        
        
        