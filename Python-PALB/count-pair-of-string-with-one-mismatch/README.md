# Count Pairs of Strings with One Mismatch

## Difficulty
Medium

## Problem Statement
Given an array `arr[]` of strings of equal length, count the number of pairs of strings that differ in exactly one character position.

Two strings differ in exactly one position if:
- they have the same length,
- and differ at exactly one index.

---

## Examples

### Example 1
Input:
arr[] = ["abc", "abd", "bbd"]

Output:
2

Explanation:
Valid pairs:
1. ("abc", "abd")
2. ("abd", "bbd")

---

### Example 2
Input:
arr[] = ["def", "deg", "dmf", "xef", "dxg"]

Output:
4

Explanation:
Valid pairs:
1. ("def", "deg")
2. ("def", "dmf")
3. ("def", "xef")
4. ("deg", "dxg")

---

### Example 3
Input:
arr[] = ["bcde", "bced", "bdce"]

Output:
0

Explanation:
No pair differs at exactly one position.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i].size() ≤ 10^5
- Total characters across all strings ≤ 10^5

---

## Approach
- For each string:
  - Replace one character at a time with `*`
  - Create a pattern.
- Use a hashmap to count how many times the same pattern appeared before.
- Matching patterns indicate strings differing at exactly one position.

---

## Time Complexity
O(n × m)

Where:
- `n` = number of strings
- `m` = length of each string

---

## Space Complexity
O(n × m)

---

## Problem Link
https://www.geeksforgeeks.org/problems/count-pairs-of-strings-with-one-mismatch/1
