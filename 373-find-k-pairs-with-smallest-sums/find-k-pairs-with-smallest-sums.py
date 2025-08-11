import Queue
class Solution(object):
    def kSmallestPairs(self, nums1, nums2, k):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type k: int
        :rtype: List[List[int]]
        """
        res=[]
        heap=[]
        for i in range(min(k,len(nums1))):
            heapq.heappush(heap,(nums1[i]+nums2[0],i,0))
            
        while heap and len(res)<k:
            total,i,j=heapq.heappop(heap)
            res.append([nums1[i],nums2[j]])
            if j+1<len(nums2):
                heapq.heappush(heap,(nums1[i]+nums2[j+1],i,j+1))
        return res 