class Solution(object):
    def floodFill(self, image, sr, sc, color):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type color: int
        :rtype: List[List[int]]
        """
        
        n=len(image)
        m=len(image[0])
        org=image[sr][sc]
        if color==org:
            return image
        def dfs(i,j):
            if i<0 or j<0 or j>=m or i>=n or image[i][j]!=org:
                return 
            image[i][j]=color
            dfs(i+1,j)
            dfs(i-1,j)
            dfs(i,j+1)
            dfs(i,j-1)
        dfs(sr,sc)
        return image