# 1365. How Many Numbers Are Smaller Than the Current Number
def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        80% faster
        14% less mem
        """
        sort = sorted(nums)
        counts = [0] * len(nums)
        for i in range(len(sort)):
            counts[i] = (sort.index(nums[i]) )
        return counts

def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        81% faster
        43% less mem
        """
        sort = sorted(nums)
        
        for i in range(len(sort)):
            nums[i] = (sort.index(nums[i]) )
        return nums