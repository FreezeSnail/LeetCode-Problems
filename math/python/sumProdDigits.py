# 1281. Subtract the Product and Sum of Digits of an Integer
def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        82% faster
        61% less mem
        """
        prod = 1
        sum = 0
        for i in range(len(str(n))):
            sum += (n%10)
            prod *= (n%10)
            n /=10
            
        return prod - sum

def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        map and reduce faster
        from discussion
        97% faster
        40% less mem
        """
        A = list(map(int, str(n)))
        return reduce(operator.mul, A) - sum(A)