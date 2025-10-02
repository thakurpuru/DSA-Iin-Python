class Solution(object):
    def isNumber(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if len(s)==1:
            if '0'<=s[0] <='9':
                return True
            else:
                return False
        s=s.lower()
        j=float('inf')
        vec=['--','++','-+','+-']
        for i in vec:
            if i in s:
                return False
        i=0
        check_e=0
        check_dot=0
        check_sign=0
        
        while i<len(s):
            if not '0'<=s[i] <='9' and s[i] not in ['.','+','-','e']:
                return False
            if s[i]=='e':
                if i==0 or i==len(s)-1 or check_e==1:
                    return False
                if not ('0' <= s[i-1] <= '9' or s[i-1] == '.'):
                    return False
                if s[i-1] == '.' and i-1 == 0:
                    return False
                check_e=1
                j=i
            elif s[i]=='.':
                if check_dot==1 or check_e==1:
                    return False
                has_digits_around = False
                if i > 0 and '0' <= s[i-1] <= '9':
                    has_digits_around = True
                if i < len(s) - 1 and '0' <= s[i+1] <= '9':
                    has_digits_around = True
                if not has_digits_around:
                    return False
                check_dot=1
            elif s[i] in ['+','-']:
                check_sign+=1
                if i > 0 and s[i-1] != 'e':
                    return False
                if i==len(s)-1:
                    return False
                if check_sign>2:
                    return False

            i+=1
        return True            

