# Shortest Substring Containing All Vowels

## Difficulty
Medium

## Problem Statement
You are given two strings:
- `s1` containing distinct lowercase vowels
- `s2` containing lowercase English letters

Find the length of the shortest contiguous substring in `s2` that contains all vowels present in `s1` at least once.

Return `-1` if no such substring exists.

---

## Examples

### Example 1
Input:
s1 = "ae"
s2 = "acbaudeq"

Output:
4

Explanation:
The shortest substring containing both `a` and `e` is `"aude"`.

---

### Example 2
Input:
s1 = "iou"
s2 = "iuixoiu"

Output:
3

Explanation:
The shortest substring containing `i`, `o`, and `u` is `"oiu"`.

---

### Example 3
Input:
s1 = "aeiou"
s2 = "uoiee"

Output:
-1

Explanation:
Character `a` is missing in `s2`.

---

## Constraints
- 1 ≤ s1.length() ≤ 5
- 1 ≤ s2.length() ≤ 10^5

---

## Approach
- Use Sliding Window technique.
- Expand the right pointer to include required vowels.
- Once all vowels are present:
  - shrink the window from the left
  - update minimum length.
- If no valid substring exists, return `-1`.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/shortest-substring-containing-all-vowels/1
