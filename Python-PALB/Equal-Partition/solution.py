class Solution:
    def equalPartition(self, arr):

        n = len(arr)
        total = sum(arr)
        target = total // 2

        size1 = n // 2
        size2 = (n + 1) // 2

        def backtrack(i, subset, curr_sum, needed):

            if len(subset) == needed:
                if curr_sum == target:
                    return subset[:]
                return None

            if i >= n:
                return None

            subset.append(arr[i])

            res = backtrack(i + 1, subset, curr_sum + arr[i], needed)
            if res:
                return res

            subset.pop()

            return backtrack(i + 1, subset, curr_sum, needed)

        part = backtrack(0, [], 0, size1)

        if not part:
            part = backtrack(0, [], 0, size2)

        used = part[:]
        second = []

        temp = part[:]

        for x in arr:
            if x in temp:
                temp.remove(x)
            else:
                second.append(x)

        return [used, second]
