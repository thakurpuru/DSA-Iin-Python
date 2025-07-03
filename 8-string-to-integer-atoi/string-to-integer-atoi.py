class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        i=0
        check=0
        res=0
        while i<len(s) and s[i]==' ':
            i+=1
        if i<len(s) and s[i] in ['+','-']:
            check=1 if s[i]=='-' else 0
            i+=1
        while i<len(s) and s[i] in ['0','1','2','3','4','5','6','7','8','9']:
            res=(res*10)+int(s[i])
            i+=1
        if res>=2147483648:
            if check==1:
                return -2147483648
            else:
                return 2147483647

        return -res if check==1 else res


        