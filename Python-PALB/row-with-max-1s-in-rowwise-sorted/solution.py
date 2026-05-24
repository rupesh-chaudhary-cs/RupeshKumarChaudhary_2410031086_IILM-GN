class Solution:
    def rowWithMax1s(self, arr):

        max_ones = 0
        index = -1

        for i in range(len(arr)):

            count = arr[i].count(1)

            if count > max_ones:
                max_ones = count
                index = i

        return index
