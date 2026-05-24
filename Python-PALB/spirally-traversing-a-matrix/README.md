# Spirally Traversing a Matrix

## Difficulty
Medium

## Problem Statement
Given a rectangular matrix `mat[][]` of size `n × m`, return all elements of the matrix in spiral order traversal.

---

## Examples

### Example 1
Input:
mat[][] = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]

Output:
[1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]

---

### Example 2
Input:
mat[][] = [
    [1, 2, 3, 4, 5, 6],
    [7, 8, 9, 10, 11, 12],
    [13, 14, 15, 16, 17, 18]
]

Output:
[1, 2, 3, 4, 5, 6, 12, 18, 17, 16, 15, 14, 13, 7, 8, 9, 10, 11]

---

### Example 3
Input:
mat[][] = [
    [32, 44, 27, 23],
    [54, 28, 50, 62]
]

Output:
[32, 44, 27, 23, 62, 50, 28, 54]

---

## Constraints
- 1 ≤ n, m ≤ 1000
- 0 ≤ mat[i][j] ≤ 100

---

## Approach
Maintain four boundaries:
- `top`
- `bottom`
- `left`
- `right`

Traverse:
1. Left → Right
2. Top → Bottom
3. Right → Left
4. Bottom → Top

After every traversal:
- update corresponding boundary.

Repeat until boundaries cross.

---

## Time Complexity
O(n × m)

## Space Complexity
O(1)  
(ignoring output array)

---

## Problem Link
https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix/1
