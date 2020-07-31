#1342. Number of Steps to Reduce a Number to Zero
def numberOfSteps (self, num):
        """
        :type num: int
        :rtype: int
        23% faster
        67% less mem
        """
        count = 0
        while num != 0:
            if(num %2 == 0):
                num /=2
            else:
                num -= 1
            count +=1
            
        return count

def numberOfSteps (self, num):
        """
        :type num: int
        :rtype: int
        given the binary representation, a 0 is 1 step 
        and a 1 is 2 steps, besides the leading 1

        24% faster
        88% less mem
        """
        binary = bin(num)[2:]
        return binary.count('1') + len(binary) - 1

def numberOfSteps (self, num):
        """
        :type num: int
        :rtype: int
        len is slow
        64% faster
        85% less mem
        """
        binary = bin(num)[2:]
        return binary.count('1') * 2 + binary.count('0') - 1