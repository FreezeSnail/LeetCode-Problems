# 1266. Minimum Time Visiting All Points
def minTimeToVisitAllPoints(self, points):
    """
    :type points: List[List[int]]
    :rtype: int
    82% faster
    6& less mem
    """
    count = 0
    for i in range(len(points)-1):
        count += max(abs(points[i][0]-points[i+1][0]), abs(points[i][1]-points[i+1][1]))

    return count