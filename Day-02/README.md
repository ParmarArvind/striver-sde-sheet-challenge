# Day 2

## 1. Best Time to Buy and Sell Stock

### Attempt 1

Time Taken: 2m 57s

Time Complexity: O(N)

Space Complexity: O(N)

Approach:
Used a suffix maximum array to store the maximum future selling price for each day and computed the maximum profit.

### Attempt 2 (Optimal)

Time Taken: 5m 23s

Time Complexity: O(N)

Space Complexity: O(1)

Approach:
Maintained the minimum stock price seen so far and calculated the maximum possible profit at each step.

---

## 2. Sort Colors

### Attempt 1

Time Taken: 2m 42s

Time Complexity: O(N)

Space Complexity: O(1)

Approach:
Counted the occurrences of 0s, 1s, and 2s and rewrote the array.

### Attempt 2 (Dutch National Flag Algorithm)

Time Taken: 9m 48s

Time Complexity: O(N)

Space Complexity: O(1)

Approach:
Used three pointers (low, mid, high) to sort the array in a single traversal.

---

## 3. Kadane's Algorithm

Time Taken: 2m 40s

Time Complexity: O(N)

Space Complexity: O(1)

Approach:
Maintained a running sum and reset it whenever it became negative while tracking the maximum subarray sum.
