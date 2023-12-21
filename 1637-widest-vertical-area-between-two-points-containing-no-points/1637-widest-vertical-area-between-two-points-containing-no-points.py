class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        res = []
        points.sort()
        for i in range(len(points)-1):
            dif = abs(points[i][0]-points[i+1][0])
            res.append(dif)
        return max(res)