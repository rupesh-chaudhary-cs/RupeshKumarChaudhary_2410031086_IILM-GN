import heapq

class Solution:
    def minOperations(self, arr):

        total = sum(arr)
        target = total / 2

        max_heap = [-x for x in arr]
        heapq.heapify(max_heap)

        operations = 0
        current = total

        while current > target:

            largest = -heapq.heappop(max_heap)

            half = largest / 2

            current -= half

            heapq.heappush(max_heap, -half)

            operations += 1

        return operations
