class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        ans=0
        i=0
        lmax=0
        rmax=0
        j=len(height)-1
        while i<j:
            lmax=max(lmax,height[i])
            rmax=max(rmax,height[j])
            if lmax<rmax:
                ans+=(lmax-height[i])
                i+=1
            else :
                ans+=(rmax-height[j])
                j-=1
        return ans
        