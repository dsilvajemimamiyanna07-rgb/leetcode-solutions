## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used a standard two-pointer iterative binary search on a sorted array, calculating the midpoint as `left + (right - left) / 2` to prevent potential integer overflow.

### Complexity
- Time: $O(\log n)$
- Space: $O(1)$

### Notes
Calculated midpoint with overflow protection instead of `(left + right) / 2`.