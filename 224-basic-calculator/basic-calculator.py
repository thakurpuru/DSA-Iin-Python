class Solution(object):
    def calculate(self, s):
        """
        :type s: str
        :rtype: int
        """
        def expression(st):
            if not st:
                return 0
            if st.isdigit() or (st[0] == '-' and st[1:].isdigit()):
                return int(st)
            num=0
            i=0
            sign='+'
            stack=[]
            while i<len(st):
                if st[i].isdigit():
                    num=num*10+int(st[i])
                if st[i] in "+-" or i==len(st)-1:
                    if sign=='+':
                        stack.append(num)
                    if sign=='-':
                        stack.append(-num)
                    sign=st[i]
                    num=0
                i+=1
            return sum(stack)


                

        s=s.replace(" ","")

        if len(s)==1:
            return int(s)
        if s[0] == '-':
            s = '0' + s
        if s[0] != '(':
            s = '(' + s + ')'
     

        
        stack1=[]
        stack2=[]
        def calculate(a,b,c):
            if c=="+":
                return str(int(b)+int(a))
            elif c=="-":
                return str(int(b)-int(a))

        res=""
        while ")" in s:
            i=s.find(")")
            if i==-1:
                break
            idx=s.rfind("(",0,i)
            st=s[idx+1:i]
            
            res=expression(st)
            if idx-1>=0 and res<0:
                if s[idx-1]=='-':
                    s=s[:idx-1]+"+"+str(abs(res))+s[i+1:]
                elif s[idx-1]=='+':
                    s=s[:idx-1]+"-"+str(abs(res))+s[i+1:]
            else:
                s=s[:idx]+str(res)+s[i+1:]
            
        return expression(s)
        





        

        



        