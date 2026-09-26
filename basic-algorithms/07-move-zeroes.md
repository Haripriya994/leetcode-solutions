# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

We move all non-zero elements to the beginning of the array while maintaining their original order. After that, we fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

We tested the solution with a normal case (`0, 1, 0, 3, 12`) and an edge case containing only zeroes (`0, 0, 0`). Both test cases passed successfully.