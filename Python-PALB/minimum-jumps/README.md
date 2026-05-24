# Minimum Jumps

## Difficulty
Medium

## Problem Statement
Given an array `arr[]` where each element represents the maximum number of steps that can be jumped forward from that position, find the minimum number of jumps required to reach the last index.

If it is not possible to reach the end, return `-1`.

---

## Examples

### Example 1
Input:
arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]

Output:
3

Explanation:
- Jump from index 0 → index 1
- Jump from index 1 → index 4
- Jump from index 4 → last index

Total jumps = 3

---

### Example 2
Input:
arr[] = [1, 4, 3, 2, 6, 7]

Output:
2

Explanation:
- Jump from index 0 → index 1
- Jump from index 1 → last index

Total jumps = 2

---

### Example 3
Input:
arr[] = [0, 10, 20]

Output:
-1

Explanation:
Cannot move from first position.

---

## Constraints
- 2 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i] ≤ 10^5

---

## Approach
Use Greedy Technique.

Maintain:
- `maxReach` → farthest reachable index
- `steps` → remaining steps in current jump
- `jumps` → total jumps used

Rules:
- Update maximum reachable position.
- Reduce steps while moving.
- When steps become 0:
  - take another jump,
  - update steps using `maxReach`.

If current index exceeds reachable range:
return `-1`.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
