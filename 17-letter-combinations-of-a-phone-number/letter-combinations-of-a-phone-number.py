class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """

        if digits=="":
            return []
        res=[]
        num={
            '2':['a','b','c'],
            '3':['d','e','f'],
            '4':['g','h','i'],
            '5':['j','k','l'],
            '6':['m','n','o'],
            '7':['p','q','r','s'],
            '8':['t','u','v'],
            '9':['w','x','y','z']
        }
        if len(digits)==1:
            return num[digits]
        def backtrack(index,path):
            if len(path)==len(digits):
                res.append("".join(path))
                return
            for char in num[digits[index]]:
                path.append(char)
                backtrack(index+1,path)
                path.pop()
        backtrack(0,[])
        return res
        