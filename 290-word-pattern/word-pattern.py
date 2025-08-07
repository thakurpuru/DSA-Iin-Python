class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        hasmap={}
        lis=s.split()
        if len(lis)!=len(pattern):
            return False
        i=0
        while i<len(lis):
            if pattern[i] not in hasmap.keys():
                if lis[i] in hasmap.values():
                    return False
                hasmap[pattern[i]]=lis[i]
            else:
                if hasmap[pattern[i]]!=lis[i]:
                    return False
            i+=1
        return True