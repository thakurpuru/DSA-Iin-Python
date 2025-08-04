class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        st=s.rstrip()
        if len(st)<=1:
            return len(st)
        res=""
        i=len(st)-1
        while i>=0:
            if st[i]==' ':
                break
            res+=st[i]
            i-=1
        return len(res)
