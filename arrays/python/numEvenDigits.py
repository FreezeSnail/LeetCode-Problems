# 1295. Find Numbers with Even Number of Digits
def findNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        61% fast
        46% less mem
        """
        count = 0
        for num in nums:
            if(len(str(num))%2 == 0):
                count +=1
                
        return count