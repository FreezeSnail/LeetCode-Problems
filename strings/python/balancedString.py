#1221. Split a String in Balanced Strings
def balancedStringSplit(self, s):
        """
        :type s: str
        :rtype: int
        74% faster
        96% less mem
        """
        out = 0
        count = 0
        for i in range(len(s)):
            if(s[i] == 'R'):
                count +=1
            else:
                count -=1
                
            if(count == 0):
                out +=1
        return out