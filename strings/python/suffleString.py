#1528. Shuffle String
def restoreString(self, s, indices):
        """
        :type s: str
        :type indices: List[int]
        :rtype: str
        78% faster
        18% less men
        """
        output = ""
        for i in range(len(s)):
            output = output + (s[indices.index(i)])
            
        return output