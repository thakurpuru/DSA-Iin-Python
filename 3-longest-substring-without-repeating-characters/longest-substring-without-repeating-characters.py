class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if s=="":
            return 0
        i=1
        sub_str=""
        sub_str+=s[0]
        length=1
        while i<len(s):
            x=sub_str.find(s[i])
            if x!=-1:
                sub_str=sub_str[x+1:]
                sub_str+=s[i]
            else:
                sub_str+=s[i]
            i+=1 
            length=max(length,len(sub_str))
        return length 
