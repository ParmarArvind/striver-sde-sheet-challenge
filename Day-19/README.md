# 📅 Day 19 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Find Nth Root of M (GFG)

- **Approach 1:** Linear Search
- **Time Complexity:** O(M × N)
- **Space Complexity:** O(1)

- **Approach 2:** Binary Search
- **Time Complexity:** O(N × log M)
- **Space Complexity:** O(1)

**Key Learning:**
- Understood the difference between brute force and Binary Search on the answer.
- Learned how to efficiently compute the integer nth root using Binary Search.
- Practiced reducing the search space over possible answers.

---

### 2. Median in a Row-wise Sorted Matrix (GFG)

- **Approach 1:** Flatten + Sort
- **Time Complexity:** O((N × M) log(N × M))
- **Space Complexity:** O(N × M)

- **Approach 2:** Binary Search on Answer
- **Time Complexity:** O(N × log M × log(Value Range))
- **Space Complexity:** O(1)

**Key Learning:**
- Learned how Binary Search can be applied on values instead of indices.
- Used `upper_bound` to count elements less than or equal to the current value.
- Understood why row-wise sorting enables an optimal solution.

---

### 3. Single Element in a Sorted Array (LeetCode)

- **Approach 1:** Linear Scan
- **Time Complexity:** O(N)
- **Space Complexity:** O(1)

- **Approach 2:** Binary Search
- **Time Complexity:** O(log N)
- **Space Complexity:** O(1)

**Key Learning:**
- Learned how index parity helps locate the unique element.
- Optimized a linear scan into a logarithmic-time solution.
- Strengthened Binary Search on sorted arrays.

---

### 4. Search in Rotated Sorted Array (LeetCode)

- **Approach:** Modified Binary Search
- **Time Complexity:** O(log N)
- **Space Complexity:** O(1)

**Key Learning:**
- Learned how to identify the sorted half of a rotated array.
- Practiced applying Binary Search under modified conditions.
- Improved understanding of rotated sorted array problems.

---

## 📚 Day 19 Summary

Today's focus was on mastering **Binary Search on Answers and Rotated Arrays**.

### Concepts Revised

- Binary Search
- Binary Search on Answer
- Answer Space Optimization
- Upper Bound
- Rotated Sorted Array
- Matrix Binary Search
- Logarithmic Search Techniques

### Progress

- ✅ Solved 4 problems
- ✅ Implemented both brute-force and optimal solutions
- ✅ Strengthened Binary Search intuition across multiple problem patterns

---

**#45DaysOfCode #StriverSDEsheet #DSA #LeetCode #Cpp**