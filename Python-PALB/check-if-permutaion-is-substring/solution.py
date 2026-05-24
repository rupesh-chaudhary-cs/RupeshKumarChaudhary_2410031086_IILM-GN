class Solution:
    def search(self, txt, pat):

        n = len(txt)
        m = len(pat)

        freq1 = [0] * 26
        freq2 = [0] * 26

        for ch in pat:
            freq1[ord(ch) - ord('a')] += 1

        for i in range(m):
            freq2[ord(txt[i]) - ord('a')] += 1

        if freq1 == freq2:
            return True

        for i in range(m, n):

            freq2[ord(txt[i]) - ord('a')] += 1
            freq2[ord(txt[i - m]) - ord('a')] -= 1

            if freq1 == freq2:
                return True

        return False
