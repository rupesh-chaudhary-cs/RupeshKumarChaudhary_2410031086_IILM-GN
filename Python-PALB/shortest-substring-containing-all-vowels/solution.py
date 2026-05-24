class Solution:
    def substrWithVowels(self, s1, s2):

        need = set(s1)
        freq = {}

        left = 0
        count = 0
        ans = float('inf')

        for right in range(len(s2)):

            ch = s2[right]

            if ch in need:
                freq[ch] = freq.get(ch, 0) + 1

                if freq[ch] == 1:
                    count += 1

            while count == len(need):

                ans = min(ans, right - left + 1)

                if s2[left] in need:
                    freq[s2[left]] -= 1

                    if freq[s2[left]] == 0:
                        count -= 1

                left += 1

        return ans if ans != float('inf') else -1
