#532. K-diff Pairs in an Array



def findPairs(self, nums: List[int], k: int) -> int:
    """
    faster than 5.03%
    less than 38.19%
    """
    
    if k < 0:  ###absolute cant be negative
        return 0
    
    pairs = []
    if k is 0:  ### need to see if array contians any dupes
        dupes = 0
        for i in range(0, len(nums)-1):
            for j in range((i+1), len(nums)):
                if nums[i] is nums[j]:
                    if not (nums[i], nums[i]) in pairs:
                        pairs.append((nums[i], nums[i]))
                        
        return len(pairs)
        
    dict = {}
    for num in nums:
        dict[num] = num;
        
    for num in nums:
        if (num + k) in dict:
            if not (num, num+k) in pairs and not (num +k, num) in pairs:
                pairs.append((num, num+k))
        if (num - k) in dict:
            if not (num, num-k) in pairs and not (num -k, num) in pairs:
                pairs.append((num, num-k))
                
    return len(pairs)


def findPairs(self, nums: List[int], k: int) -> int:

    """
    99.3% faster    
    85% less memory
    """

    if k < 0:  ###absolute cant be negative
        return 0
    

    counter = collections.Counter(nums)
    
    if k is 0:
        count = 0;
        for key in counter:
            if counter[key] > 1:
                count +=1
        return count
    
    """
            ##for each (a,b) pair the abs(a-b) = k
            -> |a-b| = k
            -> a-b = +-k 
            -> a = k+b
    """
    return sum(k+i in counter for i in counter) 