# 807. Max Increase to Keep City Skyline
def maxIncreaseKeepingSkyline(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        59% faster
        30% less mem
        """
        def maxCol(grid):
            maxims = [0] * len(grid)
            for i in range(len(grid)):
                maxims[i] = max([row[i] for row in grid])
            return maxims
        
        def maxRow(grid):
            maxims = [0] * len(grid)
            for i in range(len(grid)):
                maxims[i] = max(grid[i])
            return maxims
        
        cols =maxCol(grid)
        rows =maxRow(grid)
        
        print(cols)
        print(rows)
        
        increase = 0;
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                increase += min(cols[i], rows[j]) - grid[i][j]
                
        return increase