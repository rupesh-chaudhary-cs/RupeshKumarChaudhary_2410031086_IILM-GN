# Reverse an Array

## Difficulty
Easy

## Problem Statement
You are given an array of integers `arr[]`. You have to reverse the given array.

Note: Modify the array in place.

---

## Examples

### Example 1
Input:
arr = [1, 4, 3, 2, 6, 5]

Output:
[5, 6, 2, 3, 4, 1]

---

### Example 2
Input:
arr = [4, 5, 2]

Output:
[2, 5, 4]

---

### Example 3
Input:
arr = [1]

Output:
[1]

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i] ≤ 10^5

---

## Approach
Use two pointers:
- One pointer starts from the beginning.
- Another pointer starts from the end.
- Swap both elements.
- Move pointers toward the center.

This reverses the array in-place efficiently.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/reverse-an-array/1
