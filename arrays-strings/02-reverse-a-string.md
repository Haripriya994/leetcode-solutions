# Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

We use the two-pointer technique. One pointer starts at the beginning of the string and the other starts at the end. We swap the characters and move both pointers toward the center until the string is reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

We tested the solution with a normal string (`hello`) and a single-character edge case (`A`). Both test cases passed successfully.