class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        if len(ransomNote) > len(magazine):
            return False
        a=Counter(magazine)
        s=ransomNote
        s_count=Counter(ransomNote)
        i=0
        while i<len(s):
            if s_count[s[i]]>a[s[i]]:
                return False
            i+=1

        return True