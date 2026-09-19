## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used an array-backed dynamic stack memory allocation to push opening brackets `(`, `{`, `[` and pop to verify matching pairs upon encountering closing brackets `)`, `}`, `]`.

### Complexity
- Time: $O(n)$
- Space: $O(n)$

### Notes
Freeing memory before returning from all branch paths prevents dynamic stack memory leaks.