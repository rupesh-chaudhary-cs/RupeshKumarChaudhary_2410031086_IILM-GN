# Maximize the Minimum Difference Between K Elements

## Difficulty
Medium

## Problem Statement
Given an array `arr[]` of integers and an integer `k`, select `k` elements from the array such that the minimum absolute difference between any two selected elements is maximized.

Return this maximum possible minimum difference.

---

## Examples

### Example 1
Input:
arr[] = [2, 6, 2, 5]
k = 3

Output:
1

Explanation:
Selecting 2, 5, 6 gives minimum difference 1.

---

### Example 2
Input:
arr[] = [1, 4, 9, 0, 2, 13, 3]
k = 4

Output:
4

Explanation:
Selecting 0, 4, 9, 13 gives minimum difference 4.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i] ≤ 10^6
- 2 ≤ k ≤ arr.size()

---

## Approach
- Sort the array.
- Use Binary Search on the answer space.
- Check if it is possible to select `k` elements with at least `mid` difference.
- Maximize the minimum difference.

---

## Time Complexity
O(n log n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/maximize-the-minimum-difference-between-k-elements/1
