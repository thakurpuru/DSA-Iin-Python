class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s)!=len(t):
            return False
        hasmap={}
        i=0
        while i<len(s):
            if s[i] not in hasmap:
                if t[i] in hasmap.values():
                    return False
                hasmap[s[i]]=t[i]
            elif hasmap[s[i]]!=t[i]:
                return False
            i+=1
        return True
        