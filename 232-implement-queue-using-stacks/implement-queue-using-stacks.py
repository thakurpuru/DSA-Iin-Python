class MyQueue(object):

    def __init__(self):
        self.stack_in=[]

        

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        self.stack_in.append(x)
        
        

    def pop(self):
        """
        :rtype: int
        """
        if self.empty():
            return -1
        a=self.stack_in[0]
        self.stack_in.pop(0)
        return a
        
        

    def peek(self):
        """
        :rtype: int
        """
        return self.stack_in[0]
        

    def empty(self):
        """
        :rtype: bool
        """
        if len(self.stack_in)==0:
            return True
        return False
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()