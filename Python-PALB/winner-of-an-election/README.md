# Winner of an Election

## Difficulty
Easy

## Problem Statement
Given a lowercase string array `arr[]`, where each element represents a vote cast for a candidate, find the candidate who received the maximum number of votes.

If there is a tie, return the lexicographically smallest candidate name.

Return:
- winner name
- vote count as a string

---

## Examples

### Example 1
Input:
arr[] = ["john", "johnny", "jackie", "johnny", "john", "jackie", "jamie", "jamie", "john", "johnny", "jamie", "johnny", "john"]

Output:
["john", "4"]

Explanation:
Both "john" and "johnny" received 4 votes.
"john" is lexicographically smaller.

---

### Example 2
Input:
arr[] = ["andy", "blake", "clark"]

Output:
["andy", "1"]

Explanation:
All candidates received 1 vote.
"andy" is lexicographically smallest.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i].size() ≤ 10^5

---

## Approach
- Count frequency of each candidate using a dictionary.
- Find the maximum vote count.
- Among candidates with maximum votes:
  - choose lexicographically smallest name.

---

## Time Complexity
O(n)

## Space Complexity
O(n)

---

## Problem Link
https://www.geeksforgeeks.org/problems/winner-of-an-election/1
