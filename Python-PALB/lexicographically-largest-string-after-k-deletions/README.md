# Lexicographically Largest String After K Deletions

## Difficulty
Medium

## Problem Statement
Given a string `s` consisting of lowercase English letters and an integer `k`, remove exactly `k` characters from the string such that the resulting string is lexicographically largest while maintaining the relative order of remaining characters.

---

## Examples

### Example 1
Input:
s = "ritz"
k = 2

Output:
tz

Explanation:
Possible strings after removing 2 characters:
- "ri"
- "rt"
- "rz"
- "it"
- "iz"
- "tz"

Among them, `"tz"` is lexicographically largest.

---

### Example 2
Input:
s = "zebra"
k = 3

Output:
zr

Explanation:
Removing `"e"`, `"b"` and `"a"` gives `"zr"`.

---

## Constraints
- 1 ≤ s.size() ≤ 10^5
- 0 ≤ k < s.size()

---

## Approach
- Use a stack to build the answer.
- Remove smaller previous characters when a larger character appears and deletions are still allowed.
- This greedy approach ensures lexicographically maximum result.

---

## Time Complexity
O(n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/lexicographically-largest-string-after-k-deletions/1
