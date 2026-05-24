# Minimize the Heights II

## Difficulty
Medium

## Problem Statement
Given an array `arr[]` representing heights of towers and an integer `k`.

For every tower, you must perform exactly one operation:
- Increase height by `k`
OR
- Decrease height by `k`

Find the minimum possible difference between the tallest and shortest towers after modification.

Note:
- Heights cannot become negative.
- Every tower must be modified exactly once.

---

## Examples

### Example 1
Input:
k = 2  
arr[] = [1, 5, 8, 10]

Output:
5

Explanation:
Modified array:
[3, 3, 6, 8]

Difference:
8 - 3 = 5

---

### Example 2
Input:
k = 3  
arr[] = [3, 9, 12, 16, 20]

Output:
11

Explanation:
Modified array:
[6, 12, 9, 13, 17]

Difference:
17 - 6 = 11

---

## Constraints
- 1 ≤ k ≤ 10^7
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^7

---

## Approach
1. Sort the array.
2. Initial answer:
   maximum height - minimum height.
3. Try partitioning the array at every index:
   - Left side elements → increase by `k`
   - Right side elements → decrease by `k`
4. Compute:
   - new minimum height
   - new maximum height
5. Update the minimum difference.

Skip cases where height becomes negative.

---

## Time Complexity
O(n log n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1
