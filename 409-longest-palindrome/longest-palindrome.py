class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) ==1:
            return 1
        count=Counter(s)
        c_list=list(count.values())
        ans=c_list[0]
        i=1
        while i<len(c_list):
            if c_list[i]%2==0:
                ans+=c_list[i]
            elif ans%2==0:
                ans+=c_list[i]
            else:
                ans+=(c_list[i]-1)
            i+=1
        if ans%2==0 and 1 in c_list:
            return ans+1
        return ans

        