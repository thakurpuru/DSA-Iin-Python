class Solution(object):
    def findSubstring(self, s, words):
        """
        :type s: str
        :type words: List[str]
        :rtype: List[int]
        """
        if not s or not words:
            return []
        word_count=Counter(words)
        n=len(words)
        m=len(words[0])
        res=[]
        for i in range(m):
            left=i
            curr_count=Counter()
            count=0
            for j in range(i,len(s)-m+1,m):
                word=s[j:j+m]
                if word in word_count:
                    curr_count[word]+=1
                    count+=1
                    
                    while curr_count[word]>word_count[word]:
                        left_word=s[left:left+m]
                        curr_count[left_word]-=1
                        count-=1
                        left+=m
                    if count==n:
                        res.append(left)
                else:
                    curr_count.clear()
                    count=0
                    left=j+m
        return res



        
      


        