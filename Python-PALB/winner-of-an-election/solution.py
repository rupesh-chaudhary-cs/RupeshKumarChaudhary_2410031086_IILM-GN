class Solution:
    def winner(self, arr):

        freq = {}

        for name in arr:
            freq[name] = freq.get(name, 0) + 1

        max_votes = max(freq.values())

        ans = ""

        for name in freq:
            if freq[name] == max_votes:
                if ans == "" or name < ans:
                    ans = name

        return [ans, str(max_votes)]
