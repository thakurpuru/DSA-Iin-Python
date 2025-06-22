class MinStack(object):

    def __init__(self):
        self.stack=[]

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        min_val=self.getMin()
        if min_val>val or min_val==None:
            min_val=val
        self.stack.append([val,min_val])

        

    def pop(self):
        """
        :rtype: None
        """
        self.stack.pop()
        

    def top(self):
        """
        :rtype: int
        """
        return self.stack[-1][0]
        

    def getMin(self):
        """
        :rtype: int
        """
        return self.stack[-1][1] if self.stack else None
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()