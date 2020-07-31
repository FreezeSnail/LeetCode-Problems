# 1389. Create Target Array in the Given Order
def createTargetArray(self, nums, index):
        """
        :type nums: List[int]
        :type index: List[int]
        :rtype: List[int]
        34% faster
        15% less mem
        """
        target = []
        for i in range(len(nums)):
            target = target[:index[i]] + [nums[i]] + target[index[i]:]

        return target

def createTargetArray(self, nums, index):
        """
        :type nums: List[int]
        :type index: List[int]
        :rtype: List[int]
        59% fatser
        53% less mem
        """
        target = []
        for i in range(len(nums)):
            target.insert(index[i], nums[i]) 

        return target