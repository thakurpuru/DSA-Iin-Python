class Solution(object):
    def totalFruit(self, fruits):
        """
        :type fruits: List[int]
        :rtype: int
        """
        if len(fruits)==0:
            return 0
        if len(fruits)==1:
            return 1
        if len(fruits)==2:
            return 2
            
        i=0
        j=0
        count={}
        ans=0
        while i<len(fruits):
            count[fruits[i]]=count.get(fruits[i],0)+1

            while len(count)>2:
                count[fruits[j]]-=1
                if count[fruits[j]]==0:
                    del count[fruits[j]]
                j+=1
               
            ans=max(ans,i-j+1)
            i+=1
        return ans


        