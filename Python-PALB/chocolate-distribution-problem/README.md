# Chocolate Distribution Problem

## Difficulty
Easy

## Problem Statement
Given an array `arr[]` where each element represents the number of chocolates in a packet and an integer `m` representing the number of students.

Distribute packets such that:
1. Each student gets exactly one packet.
2. The difference between the maximum and minimum chocolates among selected packets is minimum.

Return the minimum possible difference.

---

## Examples

### Example 1
Input:
arr[] = [3, 4, 1, 9, 56, 7, 9, 12]  
m = 5

Output:
6

Explanation:
Choose packets:
[3, 4, 7, 9, 9]

Difference:
9 - 3 = 6

---

### Example 2
Input:
arr[] = [7, 3, 2, 4, 9, 12, 56]  
m = 3

Output:
2

Explanation:
Choose packets:
[2, 3, 4]

Difference:
4 - 2 = 2

---

### Example 3
Input:
arr[] = [3, 4, 1, 9, 56]  
m = 5

Output:
55

Explanation:
All packets must be distributed.

Difference:
56 - 1 = 55

---

## Constraints
- 1 ≤ m ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^9

---

## Approach
1. Sort the array.
2. Use a sliding window of size `m`.
3. For every window:
   - calculate difference between
     maximum and minimum element.
4. Store the minimum difference.

Since the array is sorted:
- first element → minimum
- last element → maximum

inside the current window.

---

## Time Complexity
O(n log n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
