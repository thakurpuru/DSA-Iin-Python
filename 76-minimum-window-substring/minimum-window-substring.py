class Solution(object):
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        if len(s)<len(t):
            return ""
        tchar={}
        for char in t:
            if char not in tchar:
                tchar[char]=1
            else:
                tchar[char]+=1
        l,r=0,0
        count=0
        ans=float('inf')
        res=""
        window={}
        while r<len(s):
            window[s[r]]=window.get(s[r],0)+1

            if s[r] in tchar and tchar[s[r]]==window[s[r]]:
                count+=1
            while count==len(tchar):
                minlen=r-l+1
                if minlen<ans:
                    ans=minlen
                    res=s[l:r+1]
                window[s[l]]-=1
                if s[l] in tchar and window[s[l]]<tchar[s[l]]:
                    count-=1
                l+=1
            r+=1
        return res


            


        