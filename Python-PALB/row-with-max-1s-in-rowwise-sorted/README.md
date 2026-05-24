# Row with Max 1s in Rowwise Sorted

## Difficulty
Medium

## Problem Statement
Given a 2D binary array `arr[][]` where each row is sorted in non-decreasing order, find the index of the first row that contains the maximum number of `1s`.

Return `-1` if no row contains any `1s`.

---

## Examples

### Example 1
Input:
arr[][] = [
    [0,1,1,1],
    [0,0,1,1],
    [1,1,1,1],
    [0,0,0,0]
]

Output:
2

Explanation:
Row 2 contains 4 ones, which is the maximum.

---

### Example 2
Input:
arr[][] = [
    [0,0],
    [1,1]
]

Output:
1

Explanation:
Row 1 contains 2 ones.

---

### Example 3
Input:
arr[][] = [
    [0,0],
    [0,0]
]

Output:
-1

Explanation:
No row contains any `1s`.

---

## Constraints
- 1 ≤ arr.size(), arr[i].size() ≤ 10^3

---

## Approach
- Traverse every row.
- Count number of `1s` using `count(1)`.
- Track:
  - maximum number of ones,
  - corresponding row index.
- Return index of first row with maximum ones.

---

## Time Complexity
O(n × m)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/row-with-max-1s-in-rowwise-sorted/1
