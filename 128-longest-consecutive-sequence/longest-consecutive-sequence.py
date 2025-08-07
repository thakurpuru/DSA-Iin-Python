class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        count=1
        key=Counter(nums)
        num=list(key.keys())
        num.sort()
        ans=1
        for i in range(len(num)-1):
            if num[i]+1==num[i+1]:
                count+=1
                if count>ans:
                    ans=count
            else:
                count=1
        return ans

        