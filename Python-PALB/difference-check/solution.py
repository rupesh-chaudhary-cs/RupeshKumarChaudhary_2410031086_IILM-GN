class Solution:

    def toSeconds(self, t):
        h = int(t[0:2])
        m = int(t[3:5])
        s = int(t[6:8])

        return h * 3600 + m * 60 + s

    def minDifference(self, arr):

        times = []

        for t in arr:
            times.append(self.toSeconds(t))

        times.sort()

        ans = float('inf')

        for i in range(1, len(times)):
            ans = min(ans, times[i] - times[i - 1])

        wrap = 86400 - times[-1] + times[0]

        ans = min(ans, wrap)

        return ans
