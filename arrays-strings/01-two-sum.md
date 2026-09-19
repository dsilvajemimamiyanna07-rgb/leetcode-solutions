## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a nested loop approach to check every pair of numbers in the array to find the target sum. Once a matching pair is found, their indices are dynamically allocated and returned.

### Complexity
- Time: $O(n^2)$
- Space: $O(1)$

### Notes
This brute-force approach works well for small inputs. An optimized approach using a Hash Table can bring the time complexity down to $O(n)$.