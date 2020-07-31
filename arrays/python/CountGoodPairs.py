#1512. Number of Good Pairs
def numIdenticalPairs(self, nums):
    """
    :type nums: List[int]
    :rtype: int
    90% faster
    58% less memory
    """
    countGoodPairs = 0
    for j in range(len(nums)):
        for i in range(j):
            if(nums[i] == nums[j]):
                countGoodPairs += 1
                
    return countGoodPairs