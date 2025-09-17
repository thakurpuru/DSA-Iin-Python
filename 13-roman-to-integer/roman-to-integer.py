class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        symbol={
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000
        }
        i=0
        res=0
        while i<len(s):
            s1=symbol[s[i]]
            s2=0
            if i+1<len(s):
                s2=symbol[s[i+1]]
            if s1>=s2:
                res+=s1
            elif s1<s2:
                res+=(s2-s1)
                i+=1
            i+=1
        return res
        