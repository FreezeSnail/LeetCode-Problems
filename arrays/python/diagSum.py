class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        """
        Runtime: 116 ms, faster than 64.26% of Python3 online submissions for Matrix Diagonal Sum.
        Memory Usage: 14.1 MB, less than 5.21% of Python3 online submissions for Matrix Diagonal Sum.
        """
        diagSum = 0
        for i in range(0, len(mat)):
            diagSum += mat[i][i]
            
        for i in range(len(mat)-1, -1, -1):
            diagSum += mat[len(mat)-1-i][i]
            
        if len(mat) %2 == 1: # repeated center
            center = len(mat)//2
            diagSum -= mat[center][center]
            
        return diagSum