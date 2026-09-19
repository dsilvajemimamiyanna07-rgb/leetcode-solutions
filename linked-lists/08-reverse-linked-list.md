## Problem: Reverse Linked List (Easy)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
Used an iterative three-pointer technique (`prev`, `curr`, `nextTemp`) to reverse the direction of pointer links in-place during a single pass through the singly linked list.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Storing `curr->next` before reassigning pointers prevents losing the reference to the rest of the list.