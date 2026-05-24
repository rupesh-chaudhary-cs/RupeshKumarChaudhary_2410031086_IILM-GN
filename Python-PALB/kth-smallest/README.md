# Kth Smallest

## Difficulty
Medium

## Problem Statement
Given an integer array `arr[]` and an integer `k`, find the kth smallest element in the array.

The kth smallest element is determined according to the sorted order of the array.

---

## Examples

### Example 1
Input:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10]  
k = 4

Output:
5

Explanation:
Sorted array:
[2, 3, 4, 5, 6, 10, 10, 33, 48, 53]

The 4th smallest element is 5.

---

### Example 2
Input:
arr[] = [7, 10, 4, 3, 20, 15]  
k = 3

Output:
7

Explanation:
Sorted array:
[3, 4, 7, 10, 15, 20]

The 3rd smallest element is 7.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^5
- 1 ≤ k ≤ arr.size()

---

## Approach
1. Sort the array in ascending order.
2. Return the element at index `k - 1`.

Because arrays use 0-based indexing:
- 1st smallest → index 0
- kth smallest → index `k - 1`

---

## Time Complexity
O(n log n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
