class Solution(object):
    def subarraysWithKDistinct(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if len(set(nums))<k:
            return 0
        def solve(n):
            count=0
            window={}
            l,r=0,0
            ans=0
            while r<len(nums):
                window[nums[r]]=window.get(nums[r],0)+1
                if window[nums[r]]==1:
                    count+=1
                while count>n:
                    window[nums[l]]-=1
                    if window[nums[l]]==0:
                        count-=1
                    l+=1
                ans+=(r-l+1)
                r+=1
            return ans
        a=solve(k)
        b=solve(k-1)
        return a-b

        
        