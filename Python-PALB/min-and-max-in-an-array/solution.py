class Solution:
    def getMinMax(self, arr):

        min_arr = arr[0]
        max_arr = arr[0]

        for i in range(len(arr)):

            if min_arr > arr[i]:
                min_arr = arr[i]

            if max_arr < arr[i]:
                max_arr = arr[i]

        return min_arr, max_arr
