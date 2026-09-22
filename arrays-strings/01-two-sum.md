# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

We use two nested loops to check every possible pair of numbers in the array.

For each pair, we check whether their sum equals the target. If a matching pair is found, we return its indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The array may contain duplicate values, and the same element cannot be used twice.

We tested the program with two test cases locally before submission.