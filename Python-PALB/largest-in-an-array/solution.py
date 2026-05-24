class Solution:
    def largest(self, arr):

        arr.sort(reverse=True)

        return arr[0]
