class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        i=len(a)
        j=len(b)
        while i!=j:
            if i>j:
                b='0'+ b
                j+=1
            else:
                a='0'+a
                i+=1
        carry=0
        ans=""
        i=len(a)-1
        while i>=0:
            bit_1=int(a[i])
            bit_2=int(b[i])

            total=bit_1+bit_2+carry
            ans=str(total%2)+ans
            carry=total//2
            i-=1
        if carry==1:
            ans='1'+ans
        return ans