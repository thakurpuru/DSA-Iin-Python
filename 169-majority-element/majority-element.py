class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = defaultdict(int)
        n=len(nums)
        for i in nums:
            count[i] +=1

        n=n//2
        for key, value in count.items():
            if value > n:
                return key    
        

        return 0    