# Rotate Array by One

## Difficulty
Basic

## Problem Statement
Given an array `arr[]`, rotate the array by one position in clockwise direction.

After rotation:
- the last element becomes the first element,
- all other elements shift one position to the right.

---

## Examples

### Example 1
Input:
arr[] = [1, 2, 3, 4, 5]

Output:
[5, 1, 2, 3, 4]

Explanation:
After one clockwise rotation:
- 5 moves to front
- remaining elements shift right

---

### Example 2
Input:
arr[] = [9, 8, 7, 6, 4, 2, 1, 3]

Output:
[3, 9, 8, 7, 6, 4, 2, 1]

Explanation:
After rotation, 3 becomes the first element.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i] ≤ 10^5

---

## Approach
1. Store the last element.
2. Shift all elements one step to the right.
3. Place the last element at index `0`.

This performs the rotation in-place.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
