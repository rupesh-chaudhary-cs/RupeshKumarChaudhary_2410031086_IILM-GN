# Balancing Consonants and Vowels Ratio

## Difficulty
Medium

## Problem Statement
You are given an array of strings `arr[]`.

A balanced string is formed by concatenating one or more contiguous strings such that:
- number of vowels = number of consonants

Your task is to count all such balanced contiguous subarrays.

---

## Examples

### Example 1
Input:
arr[] = ["aeio", "aa", "bc", "ot", "cdbd"]

Output:
4

Explanation:
Balanced subarrays are:
- arr[0..4]
- arr[1..2]
- arr[1..3]
- arr[3..3]

---

### Example 2
Input:
arr[] = ["ab", "be"]

Output:
3

Explanation:
Balanced subarrays are:
- arr[0..0]
- arr[0..1]
- arr[1..1]

---

### Example 3
Input:
arr[] = ["tz", "gfg", "ae"]

Output:
0

Explanation:
No balanced substring exists.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i].size() ≤ 10^5
- Total characters across all strings ≤ 10^5

---

## Approach

For every string:
1. Count vowels.
2. Count consonants.
3. Store difference:
   difference = vowels - consonants

Now:
- If the same prefix difference appears again,
- then the subarray between them has equal vowels and consonants.

Use:
- Prefix Sum
- HashMap

This is similar to finding subarrays with sum = 0.

---

## Time Complexity
O(total characters)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/balancing-consonants-and-vowels-ratio/1
