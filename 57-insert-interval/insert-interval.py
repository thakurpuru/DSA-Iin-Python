class Solution(object):
    def insert(self, intervals, newInterval):
        """
        :type intervals: List[List[int]]
        :type newInterval: List[int]
        :rtype: List[List[int]]
        """
        x=newInterval[0]
        y=newInterval[1]
        res=[]
        l=x
        r=y
        for i in range(0,len(intervals)):
            if (x>=intervals[i][0] and x<=intervals[i][1]) or (y>=intervals[i][0] and y<=intervals[i][1]) or (intervals[i][0]>x and intervals[i][1]<y):
                l=min(l,intervals[i][0])
                r=max(r,intervals[i][1])
            else:
                res.append(intervals[i])
        res.append([l,r])
        res.sort()
        return res
