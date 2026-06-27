# 📅 Day 08 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Longest Substring Without Repeating Characters (LeetCode 3)

- **Approach:** Sliding Window + Frequency Array
- **Time Complexity:** O(N)
- **Space Complexity:** O(1)

**Key Learning:**
- Learned how the sliding window technique efficiently maintains a valid substring.
- Used a frequency array to detect duplicate characters and shrink the window only when necessary.
- A great problem for strengthening two-pointer concepts.

---

### 2. Longest Subarray with Sum K (GFG)

- **Approach:** Prefix Sum + Hash Map
- **Time Complexity:** O(N)
- **Space Complexity:** O(N)

**Key Learning:**
- I had attempted this problem back in June using a brute-force approach, but it resulted in TLE and I couldn't optimize it at that time.
- Today I revisited the problem and understood how storing the **first occurrence of each prefix sum** helps maximize the subarray length.
- Finally optimized the solution from **O(N²)** to **O(N)** using Prefix Sum and Hash Map.
- This reminded me that revisiting old unsolved problems is one of the best ways to measure improvement.

---

### 3. Count Subarrays with Given XOR (GFG)

- **Approach:** Prefix XOR + Hash Map
- **Time Complexity:** O(N)
- **Space Complexity:** O(N)

**Key Learning:**
- Took a hint to use the **XOR cancellation rule (`A ^ A = 0`)**.
- After understanding how Prefix XOR works with a hash map, the implementation became much easier.
- Learned another powerful prefix-based pattern that can be applied to XOR problems.

---

## 📚 Day 08 Summary

Today's session focused on **Prefix-based techniques** and **Sliding Window**.

### Concepts Revised
- Sliding Window
- Prefix Sum
- Prefix XOR
- Hash Map optimization
- Revisiting and optimizing previously attempted problems

### Progress
- ✅ Solved 3 problems
- ✅ Optimized an old TLE solution to O(N)
- ✅ Learned Prefix XOR after understanding the XOR cancellation property

---
**#45DaysOfCode #StriverSDEsheet #DSA #LeetCode #GeeksforGeeks #Cpp**