# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

We use a frequency-counting approach. We count the characters in the first string and subtract the character counts from the second string. If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

We tested the solution with a normal anagram case (`anagram`, `nagaram`) and an edge case (`a`, `b`). Both test cases passed successfully.