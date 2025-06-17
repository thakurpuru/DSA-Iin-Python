class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        def fact(n):
            if n==0 or n==1:
                return 1
            res=1
            while n>0:
                res*=n
                n-=1
            return res
        if n==1:
            return 1
        ans=0
        two_step=n//2
        one_step=n%2
        while two_step>0:
            a=one_step+two_step
            ans+=(fact(a)//(fact(one_step)*fact(two_step)))
            one_step+=2
            two_step-=1
        return ans+1

        