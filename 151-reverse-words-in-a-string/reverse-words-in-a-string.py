class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        st=s.strip()
        i=len(st)-1
        mid=""
        res=""
        while i>=0:
            
            if st[i]==' ':
                if mid!="" and mid!=" ":
                    res+=(mid[::-1]+' ')
                    mid=""
            else:
                mid+=st[i]
            i-=1
        res+=(mid.strip()[::-1])
        return res.strip()



        