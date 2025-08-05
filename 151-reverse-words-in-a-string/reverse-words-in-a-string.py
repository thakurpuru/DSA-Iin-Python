class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        st=s.strip().split()
        sr=st[::-1]
        return " ".join(sr)



        