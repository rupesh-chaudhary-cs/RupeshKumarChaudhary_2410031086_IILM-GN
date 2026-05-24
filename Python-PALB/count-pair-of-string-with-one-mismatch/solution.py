class Solution:
    def countPairs(self, arr):

        mp = {}
        ans = 0
        n = len(arr)
        m = len(arr[0])

        for s in arr:

            for i in range(m):

                pattern = s[:i] + "*" + s[i+1:]

                ans += mp.get(pattern, 0)

                mp[pattern] = mp.get(pattern, 0) + 1

        return ans
