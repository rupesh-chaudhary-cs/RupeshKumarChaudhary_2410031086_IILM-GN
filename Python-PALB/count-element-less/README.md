# Count Elements Less Than or Equal to K in a Sorted Rotated Array

## Difficulty
Medium

## Problem Statement
Given a sorted array `arr[]` containing distinct non-negative integers that has been rotated at some unknown pivot, and a value `x`.

Your task is to count the number of elements in the array that are less than or equal to `x`.

---

## Examples

### Example 1
Input:
arr[] = [4, 5, 8, 1, 3]
x = 6

Output:
4

Explanation:
1, 3, 4 and 5 are less than or equal to 6.

---

### Example 2
Input:
arr[] = [6, 10, 12, 15, 2, 4, 5]
x = 14

Output:
6

Explanation:
All elements except 15 are less than or equal to 14.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i], x ≤ 10^9

---

## Approach
Traverse the array and count all elements that are less than or equal to `x`.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/count-elements-less-than-or-equal-to-k-in-a-sorted-rotated-array/1
