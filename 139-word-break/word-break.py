class Solution(object):
    def wordBreak(self, s, wordDict):
        """
        :type s: str
        :type wordDict: List[str]
        :rtype: bool
        """
        if s in wordDict:
            return True
        dp=[True]+[False]*len(s)
        sub_str=s
        for i in range(1,len(s)+1):
            for word in wordDict:
                start=i-len(word)
                if start>=0 and dp[start] and s[start:i]==word:
                    dp[i]=True
                    break

        return dp[-1]
        