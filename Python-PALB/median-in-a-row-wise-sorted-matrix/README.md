# Median in a Row-wise Sorted Matrix

## Difficulty
Medium

## Problem Statement
Given a row-wise sorted matrix `mat[][]` of size `n × m`, where both the number of rows and columns are odd, find the median of the matrix.

---

## Examples

### Example 1
Input:
mat[][] = [
    [1, 3, 5],
    [2, 6, 9],
    [3, 6, 9]
]

Output:
5

Explanation:
After sorting all elements:
[1, 2, 3, 3, 5, 6, 6, 9, 9]

Median = 5

---

### Example 2
Input:
mat[][] = [
    [2, 4, 9],
    [3, 6, 7],
    [4, 7, 10]
]

Output:
6

Explanation:
Sorted elements:
[2, 3, 4, 4, 6, 7, 7, 9, 10]

Median = 6

---

### Example 3
Input:
mat[][] = [
    [3],
    [4],
    [8]
]

Output:
4

Explanation:
Sorted elements:
[3, 4, 8]

Median = 4

---

## Constraints
- 1 ≤ n, m ≤ 400
- 1 ≤ mat[i][j] ≤ 2000

---

## Approach
- Store all matrix elements into a single array.
- Sort the array.
- Median is the middle element:
  `(n × m) // 2`

---

## Time Complexity
O((n × m) log(n × m))

## Space Complexity
O(n × m)

---

## Problem Link
https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix/1
