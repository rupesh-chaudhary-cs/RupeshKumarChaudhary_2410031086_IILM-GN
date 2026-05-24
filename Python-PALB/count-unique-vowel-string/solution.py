class Solution:
    def vowelCount(self, s):

        vowels = "aeiou"
        freq = {}

        for ch in s:
            if ch in vowels:
                freq[ch] = freq.get(ch, 0) + 1

        k = len(freq)

        if k == 0:
            return 0

        ways = 1

        for val in freq.values():
            ways *= val

        fact = 1

        for i in range(2, k + 1):
            fact *= i

        return ways * fact
