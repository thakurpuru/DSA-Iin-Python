class Solution(object):
    def floodFill(self, image, sr, sc, color):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type color: int
        :rtype: List[List[int]]
        """
        m=len(image)
        n=len(image[0])
        intial=image[sr][sc]
        if intial == color:
            return image
        def dfs(i,j):
            if i>=m or i<0 or j>=n or j<0 or image[i][j]!=intial:
                return
            image[i][j]=color
            dfs(i+1,j)
            dfs(i-1,j)
            dfs(i,j+1)
            dfs(i,j-1)
        dfs(sr,sc)
        return image
        