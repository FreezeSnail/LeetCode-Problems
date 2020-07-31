#1480	Running Sum of 1d Array    

def runningSum(self, nums):
    """
    :type nums: List[int]
    :rtype: List[int]
    5% faster
    100% less memory
    """
    sum = 0
    runningSum = [0] * len(nums)
    for i in range(len(nums)):
        for j in range(i+1):
            runningSum[i] += nums[j]

    return runningSum


def runningSum(self, nums):
    """
    :type nums: List[int]
    :rtype: List[int]
    45% faster
    """
    sum = 0
    runningSum = [0] * len(nums)
    for i in range(len(nums)):
        runningSum[i] +=  sum + nums[i]
        sum += nums[i]
            
    return runningSum