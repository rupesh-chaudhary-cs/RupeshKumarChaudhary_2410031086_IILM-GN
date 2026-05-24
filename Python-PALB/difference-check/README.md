# Difference Check

## Difficulty
Medium

## Problem Statement
Given an array `arr[]` of time strings in 24-hour clock format `"HH:MM:SS"`, return the minimum difference in seconds between any two time strings in the array.

The clock wraps around at midnight, so the difference between `"23:59:59"` and `"00:00:00"` is `1` second.

---

## Examples

### Example 1
Input:
arr[] = ["12:30:15", "12:30:45"]

Output:
30

Explanation:
The minimum difference is 30 seconds.

---

### Example 2
Input:
arr[] = ["00:00:01", "23:59:59", "00:00:05"]

Output:
2

Explanation:
The minimum difference is between `"00:00:01"` and `"23:59:59"`.

---

## Constraints
- 2 ≤ arr.size() ≤ 10^5
- arr[i] is in `"HH:MM:SS"` format.

---

## Approach
- Convert each time string into total seconds.
- Sort the seconds array.
- Find minimum difference between adjacent times.
- Also check circular difference between last and first time across midnight.

---

## Time Complexity
O(n log n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/difference-check/1
