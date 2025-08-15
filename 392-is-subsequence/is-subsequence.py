class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        count={}
        for i in range(len(s)):
            if s[i] not in count:
                count[s[i]]=1
            else:
                count[s[i]]+=1

        j=0
        for i in range(len(t)):
            if t[i] in count and s[j]==t[i]:
                j+=1
                if count[t[i]]>1:
                    count[t[i]]-=1
                else:
                    count.pop(t[i])
        if len(count)==0:
            return True
        return False
        