class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        if len(p)>len(s):
            return []
        res=[]
        p_char={}
        for ch in p:
            if ch not in p_char:
                p_char[ch]=1
            else:
                p_char[ch]+=1
        window_char={}
        start=0
        for end_ix,char in enumerate(s):
            if char not in p_char:
                start=end_ix+1
                window_char.clear()
            else:
                if char in window_char:
                    window_char[char]+=1

                    while window_char[char]>p_char[char]:
                        window_char[s[start]]-=1
                        start+=1
                else:
                    window_char[char]=1
                if window_char==p_char:
                    res.append(start)
        return res
                

    
        