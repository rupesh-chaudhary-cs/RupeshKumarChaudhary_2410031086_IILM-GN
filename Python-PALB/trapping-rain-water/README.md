# Trapping Rain Water

## Difficulty
Hard

## Problem Statement
Given an array `arr[]` representing heights of blocks, calculate how much rain water can be trapped between the blocks.

Each block has width `1`.

---

## Examples

### Example 1
Input:
arr[] = [3, 0, 1, 0, 4, 0, 2]

Output:
10

Explanation:
Water trapped at each index:
[0, 3, 2, 3, 0, 2, 0]

Total = 10

---

### Example 2
Input:
arr[] = [3, 0, 2, 0, 4]

Output:
7

Explanation:
Water trapped:
[0, 3, 1, 3, 0]

Total = 7

---

### Example 3
Input:
arr[] = [1, 2, 3, 4]

Output:
0

Explanation:
No water can be trapped.

---

### Example 4
Input:
arr[] = [2, 1, 5, 3, 1, 0, 4]

Output:
9

Explanation:
Water trapped:
[0, 1, 0, 1, 3, 4, 0]

Total = 9

---

## Constraints
- 1 < arr.size() < 10^5
- 0 < arr[i] < 10^3

---

## Approach
Use Two Pointer Technique.

Maintain:
- `left` pointer
- `right` pointer
- `leftMax`
- `rightMax`

Rules:
- Move the smaller height pointer.
- If current height is smaller than maximum seen so far:
  trapped water = maxHeight - currentHeight

This avoids extra arrays and works efficiently.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
