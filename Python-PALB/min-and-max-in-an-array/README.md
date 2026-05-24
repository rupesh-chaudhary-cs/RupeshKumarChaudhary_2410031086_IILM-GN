# Min and Max in Array

## Difficulty
Basic

## Problem Statement
Given an array `arr[]`, find:
- the minimum element
- the maximum element

Return both values.

---

## Examples

### Example 1
Input:
arr[] = [1, 4, 3, 5, 8, 6]

Output:
[1, 8]

Explanation:
- Minimum element = 1
- Maximum element = 8

---

### Example 2
Input:
arr[] = [12, 3, 15, 7, 9]

Output:
[3, 15]

Explanation:
- Minimum element = 3
- Maximum element = 15

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^9

---

## Approach
1. Initialize:
   - `min_arr`
   - `max_arr`
   with the first element.
2. Traverse the array.
3. Update:
   - minimum value
   - maximum value

Finally return both values.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
