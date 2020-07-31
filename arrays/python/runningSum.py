class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        sum = 0
        runningSum = [0] * len(nums)
        for i in range(len(nums)):
            for j in range(i+1):
                runningSum[i] += nums[j]
   
            
        return runningSum