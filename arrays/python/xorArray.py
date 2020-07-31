#1486. XOR Operation in an Array
def xorOperation(self, n, start):
        """
        :type n: int
        :type start: int
        :rtype: int
        46%faster
        43% less mem
        """
        output = 0
        arr = [0] * n
        for i in range(n):
            arr[i] = start +(2*i)
        
        for i in range(n):
            output = output ^ arr[i]
            
        return output


def xorOperation(self, n, start):
        """
        :type n: int
        :type start: int
        :rtype: int
        46% faster
        56% less mem
        """
        output = 0
  
        for i in range(n):
            output = output ^ start +(2*i)
            
        return output


