# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

We keep track of the minimum price seen so far while scanning the array. For each price, we calculate the possible profit and update the maximum profit whenever we find a larger value.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

We tested the solution with a normal case (`7, 1, 5, 3, 6, 4`) and a decreasing-price edge case (`7, 6, 4, 3, 1`). Both test cases passed successfully.