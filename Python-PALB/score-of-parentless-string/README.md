# Score of Parentheses String

## Difficulty
Medium

## Problem Statement
Given a string `s` consisting of balanced parentheses, calculate the score of the string using the following rules:

- `"()"` has a score of `1`
- `"AB"` has a score of `A + B`
- `"(A)"` has a score of `2 × score(A)`

The score always fits within a 32-bit integer.

---

## Examples

### Example 1
Input:
s = "()()"

Output:
2

Explanation:
The string is of the form `"AB"`.

score = 1 + 1 = 2

---

### Example 2
Input:
s = "(()(()))"

Output:
6

Explanation:
score = 2 × (1 + 2 × 1) = 6

---

### Example 3
Input:
s = "((()))"

Output:
4

Explanation:
score = 2 × (2 × 1) = 4

---

## Constraints
- 1 ≤ s.size() ≤ 10^5
- s[i] ∈ { '(', ')' }

---

## Approach
- Use a stack to keep track of scores.
- Push `0` when `(` appears.
- On `)`:
  - pop the top value,
  - calculate:
    - `1` for `()`
    - `2 × value` for nested parentheses.
- Add result to previous stack element.

---

## Time Complexity
O(n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/score-of-parentheses-string/1
