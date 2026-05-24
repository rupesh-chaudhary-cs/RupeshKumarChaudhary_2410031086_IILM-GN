# Largest in Array

## Difficulty
Basic

## Problem Statement
Given an array `arr[]`, find and return the largest element present in the array.

---

## Examples

### Example 1
Input:
arr[] = [1, 8, 7, 56, 90]

Output:
90

Explanation:
The largest element is 90.

---

### Example 2
Input:
arr[] = [5, 5, 5, 5]

Output:
5

Explanation:
All elements are equal.

---

### Example 3
Input:
arr[] = [10]

Output:
10

Explanation:
Only one element exists.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^6
- 0 ≤ arr[i] ≤ 10^6

---

## Approach
1. Sort the array in descending order.
2. Return the first element.

Since the largest element comes first after sorting, the answer is `arr[0]`.

---

## Time Complexity
O(n log n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
