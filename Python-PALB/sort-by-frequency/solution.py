class Solution:
    def frequencySort(self, s):

        freq = {}

        for ch in s:
            freq[ch] = freq.get(ch, 0) + 1

        arr = sorted(freq.items(), key=lambda x: (x[1], x[0]))

        ans = ""

        for ch, cnt in arr:
            ans += ch * cnt

        return ans
