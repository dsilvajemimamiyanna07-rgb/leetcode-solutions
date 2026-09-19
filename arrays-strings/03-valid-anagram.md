## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a fixed-size frequency array of 26 integers to count character occurrences in the first string and decrement them for the second string.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Using a frequency array for lower-case English letters keeps spatial overhead at $O(1)$ constant auxiliary memory.