## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Tracked the minimum buying price seen so far while iterating through the array and calculated the maximum profit achievable at each step.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
A single-pass greedy approach avoids the $O(n^2)$ time complexity of comparing every possible pair of buy/sell days.