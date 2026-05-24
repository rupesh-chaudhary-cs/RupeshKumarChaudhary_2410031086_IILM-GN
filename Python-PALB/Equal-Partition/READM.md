# Equal Partition

## Difficulty
Medium

## Problem Statement
Given an array `arr[]` of size `n`, divide the array into two subsets such that the absolute difference between the sum of elements in both subsets is equal to zero.

Conditions:
- If `n` is even, both subsets must contain exactly `n/2` elements.
- If `n` is odd, one subset must contain `(n-1)/2` elements and the other subset must contain `(n+1)/2` elements.

It is guaranteed that at least one valid partition exists.

---

## Examples

### Example 1
Input:
arr[] = [1, 2, 3, 4]

Output:
[[1, 4], [2, 3]]

Explanation:
Both subsets have equal sum.

---

### Example 2
Input:
arr[] = [5, 10, 15]

Output:
[[5, 10], [15]]

Explanation:
Both subsets have equal sum.

---

## Constraints
- 1 ≤ n ≤ 20
- -200 ≤ arr[i] ≤ 200

---

## Approach
- Calculate total sum of the array.
- Target sum for one subset is `total // 2`.
- Use backtracking to find a subset with the required size and target sum.
- Remaining elements form the second subset.

---

## Time Complexity
O(2^n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/equal-partition/1
