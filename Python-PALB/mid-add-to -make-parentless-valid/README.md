# Min Add to Make Parentheses Valid

## Difficulty
Medium

## Problem Statement
You are given a string `s` consisting only of the characters `'('` and `')'`.

Your task is to determine the minimum number of parentheses that must be inserted at any positions to make the string a valid parentheses string.

A parentheses string is considered valid if:
- Every opening parenthesis `(` has a corresponding closing parenthesis `)`.
- Every closing parenthesis `)` has a corresponding opening parenthesis `(`.
- Parentheses are properly nested.

---

## Examples

### Example 1
Input:
s = "(()("

Output:
2

Explanation:
Two unmatched `(` need two `)`.

---

### Example 2
Input:
s = ")))"

Output:
3

Explanation:
Three `(` are needed at the beginning.

---

### Example 3
Input:
s = ")()()"

Output:
1

Explanation:
One `(` is needed before the first `)`.

---

## Constraints
- 1 ≤ s.length ≤ 10^5

---

## Approach
- Maintain count of unmatched opening brackets.
- If `(` appears, increase count.
- If `)` appears:
  - match with an opening bracket if possible,
  - otherwise increase insertion count.
- Final answer:
  - unmatched opening brackets + insertions.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/min-add-to-make-parentheses-valid/1
