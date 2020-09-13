#20. Valid Parentheses
class Solution:
    def isValid(self, s: str) -> bool:   
        
        """
        Runtime: 44 ms, faster than 25.16% of Python3 online submissions for Valid Parentheses.
        Memory Usage: 13.8 MB, less than 82.27% of Python3 online submissions for Valid Parentheses.
        """
        
        def isCloseBracket(opener, closer):
            if(opener == '('):
                return closer == ')'
            if(opener == '{'):
                 return closer == '}'
            if(opener == '['):
                 return closer == ']'
            
        
        
        stack = []

        opens = ['{','[','(']
        closes = ['}',']',')']


        for char in s:
            if(char in opens):
                stack.append(char)
            elif(char in closes):
                if not stack:
                    #print("emptystack")
                    return False
                top = stack[-1]
                stack.pop()
                if not isCloseBracket(top, char):
                    #print('missmatch')
                    return False
                
        

        return  not stack 