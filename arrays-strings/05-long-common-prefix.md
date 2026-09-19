## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Assumed the first string as the initial prefix and iteratively compared it with subsequent strings, shortening the prefix whenever characters failed to match.

### Complexity
- Time: $O(S)$ where $S$ is the sum of all characters in all strings.
- Space: $O(1)$

### Notes
Truncating the prefix string in place avoids additional heap allocations.