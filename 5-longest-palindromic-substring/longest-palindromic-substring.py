class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        def check(st):
            i=0
            j=len(st)-1
            while i<j:
                if st[i]!=st[j]:
                    return False
                i+=1
                j-=1
            return True
        if check(s):
            return s
        i=0
        j=len(s)-1
        res=""
        while i<len(s):
            for j in range(len(s),i,-1):
                st=s[i:j]
                if check(st):
                    if len(st)>len(res):
                        res=st
            i+=1
        return res

        

        