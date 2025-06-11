class Solution(object):
    # Pow
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if x==0:
            return 0
        if n==0:
            return 1
        if x==-1 and n%2==0:
            return 1   
        if x==-1 and n%2!=0:
            return -1 
        if x==1 :
            return 1    
        w=n
        if w<0:
            w=-w
            x=1/x
        
        result=1

        while w!=0:
            a=w % 2
            if a==1:
                result*=x
            x=x*x
            w=w//2

        return result   