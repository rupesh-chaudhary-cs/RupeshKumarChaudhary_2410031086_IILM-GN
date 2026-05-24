# Three Way Partitioning

## Difficulty
Easy

## Problem Statement
Given an array `arr[]` and a range `[a, b]`, partition the array into three parts:

1. Elements smaller than `a`
2. Elements in the range `[a, b]`
3. Elements greater than `b`

The order inside each group does not matter.

Return the modified array.

---

## Examples

### Example 1
Input:
arr[] = [1, 2, 3, 3, 4]
a = 1
b = 2

Output:
true

Explanation:
One possible arrangement:
[1, 2, 3, 3, 4]

---

### Example 2
Input:
arr[] = [1, 4, 3, 6, 2, 1]
a = 1
b = 3

Output:
true

Explanation:
One possible arrangement:
[1, 3, 2, 1, 4, 6]

---

## Constraints
- 1 ≤ arr.size() ≤ 10^6
- 1 ≤ arr[i], a, b ≤ 10^9

---

## Approach
Use the Dutch National Flag Algorithm.

Maintain three pointers:
- `low` → elements smaller than `a`
- `mid` → current element
- `high` → elements greater than `b`

Rules:
- If current element < `a`:
  swap with `low`
- If current element > `b`:
  swap with `high`
- Otherwise:
  move `mid`

This partitions the array in one traversal.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/three-way-partitioning/1
