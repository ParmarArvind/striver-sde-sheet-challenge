# Day 3

## 1. Merge Sorted Array

### Attempt 1

Time Taken: 7m 44s

Time Complexity: O(M + N)

Space Complexity: O(M + N)

Approach:
Used an additional array to merge both sorted arrays and copied the merged result back into nums1.

### Attempt 2 (Optimal)

Time Taken: 34m 24s

Time Complexity: O(M + N)

Space Complexity: O(1)

Approach:
Initially tried filling nums1 from left to right using three pointers, but that would overwrite elements before they were processed. To avoid this, I used backward filling, placing the largest elements first from the end of the array.

---

## 2. Merge Intervals

### Attempt 1

Time Taken: 7m 44s

Time Complexity: O(N log N)

Space Complexity: O(N)

Approach:
Sorted the intervals based on their starting points and merged overlapping intervals while traversing the array.

---

## 3. Rotate Image

### Attempt 1

Time Taken: 4m 33s

Time Complexity: O(N²)

Space Complexity: O(N²)

Approach:
Created a new matrix and directly placed each element in its rotated position.

### Attempt 2 (Optimal)

Time Taken: 15m 51s

Time Complexity: O(N²)

Space Complexity: O(1)

Approach:
Performed matrix transpose followed by reversing each row to achieve a 90° clockwise rotation in-place.
