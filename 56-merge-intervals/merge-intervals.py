class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        intervals.sort(key=lambda x:x[0])
        res=[]
        res.append(intervals[0])
        for i in range(1,len(intervals)):
            top=res[-1]
            if intervals[i][0]<=top[1]:
                res.pop()
                y=max(top[1],intervals[i][1])
                res.append([top[0],y])
            else:
                res.append(intervals[i])
        return res


        