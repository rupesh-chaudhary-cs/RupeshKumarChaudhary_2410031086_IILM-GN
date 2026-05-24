# Sort by Frequency

## Difficulty
Medium

## Problem Statement
Given a string `s`, arrange the string according to the frequency of each character in ascending order.

If two characters have the same frequency, then they should be arranged in lexicographical order.

---

## Examples

### Example 1
Input:
s = "geeksforgeeks"

Output:
forggkksseeee

Explanation:
Characters with smaller frequency appear first.
Characters with the same frequency are arranged lexicographically.

---

### Example 2
Input:
s = "abc"

Output:
abc

Explanation:
All characters have frequency 1, so they are sorted lexicographically.

---

## Constraints
- 1 ≤ s.length() ≤ 10^6
- String contains lowercase English alphabets only.

---

## Approach
- Count frequency of each character using a dictionary.
- Sort characters based on:
  1. Frequency (ascending)
  2. Lexicographical order
- Build final string using sorted frequencies.

---

## Time Complexity
O(n log n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/sort-by-frequency/1
