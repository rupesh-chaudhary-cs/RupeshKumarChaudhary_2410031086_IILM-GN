class Solution:
    def findMinDiff(self, arr, m):

        n = len(arr)

        if m == 0 or n == 0:
            return 0

        arr.sort()

        minimum = float('inf')

        for i in range(n - m + 1):

            diff = arr[i + m - 1] - arr[i]

            minimum = min(minimum, diff)

        return minimum
