# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

We use a stack to store opening brackets. For every closing bracket, we check whether it matches the most recent opening bracket. The string is valid only when all brackets are correctly matched and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

We tested the solution with a normal case (`()[]{}`) and an edge case (`(]`). Both test cases passed successfully.