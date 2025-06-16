class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        if len(ransomNote) > len(magazine):
            return False
        a=list(magazine)
        s=ransomNote
        i=0
        while i<len(s):
            if s[i] in a:
                a.pop(a.index(s[i]))
            else:
                return False
            i+=1

        return True