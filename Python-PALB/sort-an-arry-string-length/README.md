# Sort an Array of Strings According to String Lengths

## Difficulty
Medium

## Problem Statement
You are given an array `arr[]` of strings.

Sort the array in ascending order based on the lengths of the strings.

If two strings have the same length, maintain their original relative order.

---

## Examples

### Example 1
Input:
arr[] = ["GeeksforGeeeks", "I", "from", "am"]

Output:
["I", "am", "from", "GeeksforGeeeks"]

Explanation:
Strings are sorted based on increasing length.

---

### Example 2
Input:
arr[] = ["You", "are", "beautiful", "looking"]

Output:
["You", "are", "looking", "beautiful"]

Explanation:
Strings are arranged from shortest to longest.

---

## Constraints
- 1 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i].size() ≤ 100
- Strings contain only English letters.

---

## Approach
- Use Python's built-in stable sorting.
- Sort the array using string length as the key.
- Stable sort ensures original relative order remains unchanged for equal lengths.

---

## Time Complexity
O(n log n)

## Space Complexity
O(1)

---

## Problem Link
https://www.geeksforgeeks.org/problems/sort-an-array-of-strings-according-to-string-lengths/1
