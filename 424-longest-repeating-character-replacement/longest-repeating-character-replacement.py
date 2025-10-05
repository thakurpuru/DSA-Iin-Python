class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        freq={}
        max_freq=0
        l=0
        r=0
        while r<len(s):
            freq[s[r]]=freq.get(s[r],0)+1
            max_freq=max(max_freq,freq[s[r]])
            if r-l+1-max_freq>k:
                freq[s[l]]-=1
                l+=1
            r+=1
       
        return len(s)-l

        