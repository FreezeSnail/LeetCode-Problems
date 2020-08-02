# 1395. Count Number of Teams
def numTeams(self, rating):
        """
        :type rating: List[int]
        :rtype: int
        51% faster
        58% less mem
        """
        
        count = 0
        for i in range(len(rating)):
            for j in range(i, len(rating)):
                for k in range(j, len(rating)):
                    if((rating[i] < rating[j] and rating[j] < rating[k]) or (rating[i] > rating[j] and rating[j] > rating[k])):
                        count +=1
                        
        return count