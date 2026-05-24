# Count Unique Vowel Strings

## Difficulty
Medium

## Problem Statement
Given a lowercase string `s`, determine the total number of distinct strings that can be formed using the following rules:

1. Identify all unique vowels (`a`, `e`, `i`, `o`, `u`) present in the string.
2. For each distinct vowel, choose exactly one of its occurrences from `s`.
3. Generate all possible permutations of the selected vowels.
4. Return the total number of such distinct strings.

---

## Examples

### Example 1
Input:
s = "aeiou"

Output:
120

Explanation:
All five vowels appear once.

Number of possible strings:
5! = 120

---

### Example 2
Input:
s = "ae"

Output:
2

Explanation:
Possible strings:
- "ae"
- "ea"

---

### Example 3
Input:
s = "aacidf"

Output:
4

Explanation:
Vowels present:
- a → appears 2 times
- i → appears 1 time

Ways to choose vowels:
2 × 1 = 2

Permutations of 2 vowels:
2! = 2

Total strings:
2 × 2 = 4

---

## Constraints
- 1 ≤ s.size() ≤ 100

---

## Approach
- Count frequency of each vowel.
- Multiply frequencies to count ways of selecting vowels.
- Compute factorial of number of distinct vowels for permutations.
- Final answer:
  ways × factorial

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/count-unique-vowel-strings/1
