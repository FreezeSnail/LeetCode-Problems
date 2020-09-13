#1431. Kids With the Greatest Number of Candies
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        """
        Runtime: 36 ms, faster than 80.48% of Python3 online submissions for Kids With the Greatest Number of Candies.
        Memory Usage: 14.1 MB, less than 5.20% of Python3 online submissions for Kids With the Greatest Number of Candies.
        """
        maxCandies = max(candies)
        
        greatestCandies = []
        
        for candie in candies:
            if (candie + extraCandies) >= maxCandies:
                greatestCandies.append(True)
            else:
                greatestCandies.append(False)
                
        return greatestCandies