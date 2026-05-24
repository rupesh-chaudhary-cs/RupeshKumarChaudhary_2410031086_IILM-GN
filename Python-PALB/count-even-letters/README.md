# Count Even Letters

## Difficulty
Easy

## Problem Statement
You are given a string `s` consisting of lowercase English letters.

Your task is to count how many distinct characters appear an even number of times in the string.

---

## Examples

### Example 1
Input:
s = "abacaba"

Output:
2

Explanation:
- a appears 4 times
- b appears 2 times
- c appears 1 time

Characters with even frequency:
a, b

So the answer is 2.

---

### Example 2
Input:
s = "zzacccz"

Output:
0

Explanation:
- z appears 3 times
- a appears 1 time
- c appears 3 times

No character appears an even number of times.

---

## Constraints
- 1 ≤ s.size() ≤ 10^5

---

## Approach
- Count frequency of each character using a dictionary.
- Traverse frequencies:
  - if frequency is even,
    increment answer count.

---

## Time Complexity
O(n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/count-even-letters/1
