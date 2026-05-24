# Smallest Subarray with Sum Greater Than X

## Difficulty
Easy

## Problem Statement
Given a number `x` and an array `arr[]`, find the length of the smallest subarray whose sum is strictly greater than `x`.

If no such subarray exists, return `0`.

---

## Examples

### Example 1
Input:
x = 51  
arr[] = [1, 4, 45, 6, 0, 19]

Output:
3

Explanation:
The smallest subarray with sum greater than 51 is:
[4, 45, 6]

Length = 3

---

### Example 2
Input:
x = 100  
arr[] = [1, 10, 5, 2, 7]

Output:
0

Explanation:
No subarray has sum greater than 100.

---

## Constraints
- 1 ≤ arr.size(), x ≤ 10^5
- 0 ≤ arr[i] ≤ 10^4

---

## Approach
Use Sliding Window Technique.

Steps:
1. Expand the window by moving the `end` pointer.
2. Add elements to current sum.
3. While current sum becomes greater than `x`:
   - update minimum length,
   - shrink window from left.

This efficiently finds the smallest valid subarray.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
