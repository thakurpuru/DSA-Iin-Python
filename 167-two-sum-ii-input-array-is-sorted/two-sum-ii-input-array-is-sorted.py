class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        ans=[]
        l=0
        r=len(numbers)-1
        while l<r:
            sum_num=numbers[l]+numbers[r]
            if sum_num>target:
                r-=1
            elif sum_num<target:
                l+=1
            else :
                ans.append(l+1)
                ans.append(r+1)
                break
        return ans

        