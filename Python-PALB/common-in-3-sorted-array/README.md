# Common in 3 Sorted Arrays

## Difficulty
Easy

## Problem Statement
Given three sorted arrays in non-decreasing order, find all common elements present in all three arrays.

Return the common elements in non-decreasing order.

Note:
- Ignore duplicates.
- Include each common element only once.

---

## Examples

### Example 1
Input:
a[] = [1, 5, 10, 20, 40, 80]  
b[] = [6, 7, 20, 80, 100]  
c[] = [3, 4, 15, 20, 30, 70, 80, 120]

Output:
[20, 80]

Explanation:
20 and 80 are present in all three arrays.

---

### Example 2
Input:
a[] = [1, 2, 3, 4, 5]  
b[] = [6, 7]  
c[] = [8, 9, 10]

Output:
[]

Explanation:
No common element exists.

---

### Example 3
Input:
a[] = [1, 1, 1, 2, 2, 2]  
b[] = [1, 1, 2, 2, 2]  
c[] = [1, 1, 1, 1, 2, 2, 2, 2]

Output:
[1, 2]

Explanation:
Duplicates are ignored.

---

## Constraints
- 1 ≤ a.size(), b.size(), c.size() ≤ 10^5
- -10^5 ≤ a[i], b[i], c[i] ≤ 10^5

---

## Approach
Use Three Pointers:
- `i` for array `a`
- `j` for array `b`
- `k` for array `c`

Steps:
- If all elements are equal:
  add to result.
- Otherwise:
  move the pointer with the smallest element.

This works efficiently because arrays are sorted.

---

## Time Complexity
O(n1 + n2 + n3)

## Space Complexity
O(1)  
(excluding output array)

---

## Problem Link
https://www.geeksforgeeks.org/problems/common-elements1132/1
