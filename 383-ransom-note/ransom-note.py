class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        mp1={}
        mp2={}
        for c in magazine:
            mp2[c]=mp2.get(c,0)+1
        for c in ransomNote:
            if not mp2.get(c,0):
                return False
            mp1[c]=mp1.get(c,0)+1
        for c in ransomNote:
            if mp1[c]>mp2[c]:
                return False
        return True

        