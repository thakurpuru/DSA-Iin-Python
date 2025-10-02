class Solution(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        n=len(nums)
        ans=[]
        nums.sort()
        for i in range(n):
            if i>0 and nums[i]==nums[i-1]:
                continue
            for j in range(i+1,n):
                if j>i+1 and nums[j]==nums[j-1]:
                    continue
                p=j+1
                q=n-1
                while p<q:
                    s=nums[i]+nums[j]+nums[p]+nums[q]
                    if s<target:
                        p+=1
                    elif s>target:
                        q-=1
                    else :
                        ans.append((nums[i],nums[j],nums[p],nums[q]))
                        while p<q and nums[p]==nums[p+1]:
                            p+=1
                        while p<q and nums[q]==nums[q-1]:
                            q-=1
                        p+=1
                        q-=1

        return ans
                
                    
        