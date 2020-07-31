# 1313. Decompress Run-Length Encoded List
def decompressRLElist(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        17% faster
        75% less mem
        """
        out = []
        for i in range(len(nums)/2):
            count = nums[i*2]
            while count > 0:
                out.append(nums[(2*i)+1])
                count -=1
            
        return out

def decompressRLElist(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        46% faster
        38% less mem
        """
        out = []
        for i in range(len(nums)/2):
            out = out + [nums[(2*i)+1]] * nums[i*2]
            
        return out

def decompressRLElist(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        using list comprehension
        61% faster
        89% less mem
        """

        return [nums[(2*i)+1] for i in range(len(nums)/2) for _ in range(nums[i*2])]