# Check if Permutation is Substring

## Difficulty
Easy

## Problem Statement
Given two strings `txt` and `pat` consisting of lowercase English letters, check whether any permutation of `pat` exists as a substring of `txt`.

---

## Examples

### Example 1
Input:
txt = "geeks"
pat = "eke"

Output:
true

Explanation:
"eek" is a permutation of "eke" and exists in "geeks".

---

### Example 2
Input:
txt = "programming"
pat = "rain"

Output:
false

Explanation:
No permutation of "rain" exists in "programming".

---

## Constraints
- 1 ≤ txt.size() ≤ 10^5
- 1 ≤ pat.size() ≤ txt.size()
- Both strings contain lowercase English letters.

---

## Approach
- Use frequency arrays of size 26.
- Store character frequencies of:
  - pattern string
  - current sliding window in text.
- Compare both frequency arrays.
- If equal:
  - permutation exists.

---

## Time Complexity
O(n × 26)

## Space Complexity
O(26)

---

## Problem Link
https://www.geeksforgeeks.org/problems/check-if-permutation-is-substring/1
