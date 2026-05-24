# Previous Smaller Element

## Difficulty
Medium

## Problem Statement
Given an integer array `arr[]`, find the Previous Smaller Element (PSE) for every element.

The Previous Smaller Element of an element is the first element to its left that is strictly smaller than it.

If no such element exists, return `-1` for that position.

---

## Examples

### Example 1
Input:
arr[] = [1, 6, 2]

Output:
[-1, 1, 1]

Explanation:
- 1 → no smaller element on left → -1
- 6 → previous smaller is 1
- 2 → previous smaller is 1

---

### Example 2
Input:
arr[] = [1, 5, 0, 3, 4, 5]

Output:
[-1, 1, -1, 0, 3, 4]

Explanation:
- 1 → no smaller element → -1
- 5 → previous smaller is 1
- 0 → no smaller element → -1
- 3 → previous smaller is 0
- 4 → previous smaller is 3
- 5 → previous smaller is 4

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^5

---

## Approach
- Use a stack to maintain smaller elements.
- For each element:
  - remove elements greater than or equal to current element,
  - top of stack becomes previous smaller element.
- Push current element into stack.

---

## Time Complexity
O(n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/previous-smaller-element/1
