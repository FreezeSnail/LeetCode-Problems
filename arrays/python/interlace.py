#	1470	Shuffle the Array    
def shuffle(self, nums, n):
    """
    :type nums: List[int]
    :type n: int
    :rtype: List[int]
    81% faster
    5% less mem
    """
    shuffled = [None] * len(nums)
    for i in range(len(nums)):
        if(i % 2 == 0):
            shuffled[i] = nums[i/2]
        else:
            shuffled[i] = nums[n+i/2]
            
    return shuffled