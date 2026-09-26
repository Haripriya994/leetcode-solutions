# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

We start with the first string as the initial prefix. We compare it with each following string and shorten the prefix until it matches the beginning of that string.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

We tested the solution with a normal case (`flower`, `flow`, `flight`) and an edge case (`dog`, `racecar`, `car`). Both test cases passed successfully.