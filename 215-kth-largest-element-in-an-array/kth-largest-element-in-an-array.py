class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        heap=[]
        j=0
        while j<len(nums):
            heapq.heappush(heap,nums[j])
            if len(heap)>k:
                heapq.heappop(heap)
            j+=1
        return heap[0]