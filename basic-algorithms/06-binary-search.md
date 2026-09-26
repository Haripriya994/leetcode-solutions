# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

We use the binary search technique on the sorted array. We repeatedly check the middle element and reduce the search range based on whether the target is smaller or larger than the middle element.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

We tested the solution with a normal case where the target is present and an edge case where the target is not present. Both test cases passed successfully.