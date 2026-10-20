class Solution(object):
    def canFinish(self, numCourses, pre):
        """
        :type numCourses: int
        :type prerequisites: List[List[int]]
        :rtype: bool
        """
        q=deque()
        grp = [[] for _ in range(numCourses)]
        indegree=[0]*numCourses
        for x in pre:
            grp[x[1]].append(x[0])
            indegree[x[0]]+=1
        for i in range(numCourses):
            if indegree[i]==0:
                q.append(i)
        while len(q)!=0:
            u=q.popleft()
            for v in grp[u]:
                indegree[v]-=1
                if indegree[v]==0:
                    q.append(v)
        return all(n==0 for n in indegree)