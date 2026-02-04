class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        MIN =-2**31
        MAX=2**31-1
        if(dividend==MIN and divisor==-1):
            return MAX
        ispositive=(dividend<0) == (divisor<0)
        a=abs(dividend)
        b=abs(divisor)
        ans=0
        while a>=b:
            q=0
            while a>b*(1<<(q+1)):
                q+=1
            ans+=(1<<q)
            a=a-(b<<q)
        if ispositive:
            return ans
        return -ans