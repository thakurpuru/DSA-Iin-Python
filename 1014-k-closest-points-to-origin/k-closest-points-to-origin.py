class Solution(object):
    def kClosest(self, points, k):
        """
        :type points: List[List[int]]
        :type k: int
        :rtype: List[List[int]]
        """
        def distance(p):
            x=p[0]
            y=p[1]
            return math.sqrt(x**2 + y**2)
        map_point=[]
        for i in range(len(points)):
            heapq.heappush(map_point,(distance(points[i]),i))
        res=[]
        while k>0:
            p=heapq.heappop(map_point)
            res.append(points[p[1]])
            k-=1
        return res

