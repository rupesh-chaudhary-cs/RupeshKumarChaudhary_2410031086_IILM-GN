# Union of Arrays with Duplicates

## Difficulty
Easy

## Problem Statement
Given two arrays `a[]` and `b[]`, find the Union of both arrays.

The union contains:
- all distinct elements
- appearing only once
- from either array

The result can be returned in any order.

---

## Examples

### Example 1
Input:
a[] = [1, 2, 3, 2, 1]  
b[] = [3, 2, 2, 3, 3, 2]

Output:
[1, 2, 3]

Explanation:
Distinct elements from both arrays are:
1, 2, and 3.

---

### Example 2
Input:
a[] = [1, 2, 3]  
b[] = [4, 5, 6]

Output:
[1, 2, 3, 4, 5, 6]

Explanation:
All elements are unique.

---

### Example 3
Input:
a[] = [1, 2, 1, 1, 2]  
b[] = [2, 2, 1, 2, 1]

Output:
[1, 2]

Explanation:
Only distinct elements are included.

---

## Constraints
- 1 ≤ a.size(), b.size() ≤ 10^6
- 0 ≤ a[i], b[i] ≤ 10^5

---

## Approach
Use a Set Data Structure.

Steps:
1. Insert all elements of array `a` into a set.
2. Insert all elements of array `b` into the same set.
3. Convert the set into a list.

A set automatically removes duplicates.

---

## Time Complexity
O(n + m)

## Space Complexity
O(n + m)

---

## Problem Link
https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
