class Solution:
    def findMaxValueOfEquation(self, points: List[List[int]], k: int) -> int:
        q = collections.deque()
        res = -float('inf')
        for x, y in points:
            while q and q[0][1] < x - k:
                q.popleft()
            if q: res = max(res, q[0][0] + y + x)
            while q and q[-1][0] <= y - x:
                q.pop()
            q.append([y - x, x])
        return res