# Minimum Steps to Halve Sum

## Difficulty
Medium

## Problem Statement
Given an array `arr[]`, find the minimum number of operations required to make the sum of array elements less than or equal to half of the original sum.

In one operation:
- choose any element,
- replace it with half of its value.

Floating-point precision is allowed.

---

## Examples

### Example 1
Input:
arr[] = [8, 6, 2]

Output:
3

Explanation:
Initial sum = 16  
Target = 8

Operations:
- 8 → 4 → sum = 12
- 6 → 3 → sum = 9
- 2 → 1 → sum = 8

Total operations = 3

---

### Example 2
Input:
arr[] = [9, 1, 2]

Output:
2

Explanation:
Initial sum = 12  
Target = 6

Operations:
- 9 → 4.5 → sum = 7.5
- 4.5 → 2.25 → sum = 5.25

Total operations = 2

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i] ≤ 10^4

---

## Approach
- Use a Max Heap to always halve the largest element.
- Reducing the largest number decreases the total sum fastest.
- Continue until current sum becomes less than or equal to half of original sum.

---

## Time Complexity
O(n log n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/minimum-steps-to-halve-sum/1
