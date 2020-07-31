#771. Jewels and Stones


def numJewelsInStones(self, J, S):
    """
    :type J: str
    :type S: str
    :rtype: int
    10% faster
    70% less mem
    """
    count = 0
    for char in J:
        for stone in S:
            if(char == stone):
                count +=1
                
    return count

def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        97% faster
        44% less mem
        """
        count = 0
        for char in J:
            count +=S.count(char)
                    
        return count