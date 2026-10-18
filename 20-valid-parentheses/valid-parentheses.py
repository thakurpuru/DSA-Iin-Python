class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        st=[]
        for c in s:
            if c in ['(','{','[']:
                st.append(c)
            else:
                if len(st)==0:
                    return False
                top=st.pop()
                if c==')' and top!='(':
                    return False
                elif c=='}' and top!='{':
                    return False
                elif c==']' and top!='[':
                    return False
        return len(st)==0
        