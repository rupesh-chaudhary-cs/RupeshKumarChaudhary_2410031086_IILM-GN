# Triplet Sum in Array

## Difficulty
Medium

## Problem Statement
Given an array `arr[]` and an integer `target`, determine whether there exists a triplet in the array whose sum is equal to the target.

Return:
- `true` if such a triplet exists
- `false` otherwise

---

## Examples

### Example 1
Input:
arr[] = [1, 4, 45, 6, 10, 8]  
target = 13

Output:
true

Explanation:
The triplet `{1, 4, 8}` gives sum = 13.

---

### Example 2
Input:
arr[] = [1, 2, 4, 3, 6, 7]  
target = 10

Output:
true

Explanation:
Possible triplets:
- `{1, 3, 6}`
- `{1, 2, 7}`

---

### Example 3
Input:
arr[] = [40, 20, 10, 3, 6, 7]  
target = 24

Output:
false

Explanation:
No valid triplet exists.

---

## Constraints
- 3 ≤ arr.size() ≤ 5 × 10^3
- 0 ≤ arr[i], target ≤ 10^5

---

## Approach
Use Sorting + Two Pointer Technique.

Steps:
1. Sort the array.
2. Fix one element.
3. Use two pointers:
   - `left`
   - `right`
4. Compare:
   - If sum equals target → return `True`
   - If sum is smaller → move `left`
   - Otherwise → move `right`

This efficiently checks all possible triplets.

---

## Time Complexity
O(n²)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
