# 📘 Day 6 - Arrays (Part F)

## Problems Solved

---

### 1. Majority Element II

🔗 LeetCode 229

#### Approach 1 - Hash Map

- **Time Complexity:** O(N)
- **Space Complexity:** O(N)

**Idea:**
Count the frequency of every element using a hash map and return all elements whose frequency is greater than ⌊N/3⌋.

---

#### Approach 2 - Sorting

- **Time Complexity:** O(N log N)
- **Space Complexity:** O(1)

**Idea:**
Sort the array and count consecutive occurrences. Whenever the count exceeds ⌊N/3⌋, add the element to the answer while avoiding duplicates.

---

#### Approach 3 - Boyer-Moore Voting Algorithm

- **Time Complexity:** O(N)
- **Space Complexity:** O(1)

**Idea:**
Maintain two possible majority candidates and verify them in a second traversal. This is the optimal solution.

---

### 2. Unique Paths

🔗 LeetCode 62

#### Approach 1 - Memoization (Top Down DP)

- **Time Complexity:** O(M × N)
- **Space Complexity:** O(M × N)

**Idea:**
Use recursion with memoization to store already computed states and avoid repeated calculations.

---

#### Approach 2 - Tabulation (Bottom Up DP)

- **Time Complexity:** O(M × N)
- **Space Complexity:** O(M × N)

**Idea:**
Build the DP table iteratively where each cell stores the number of ways to reach that position.

---

### 3. Reverse Pairs

🔗 LeetCode 493

#### Approach 1 - Merge Sort + Binary Search

- **Time Complexity:** O(N log² N)
- **Space Complexity:** O(N)

**Idea:**
During Merge Sort, use Binary Search on the left half to count valid reverse pairs before merging.

---

#### Approach 2 - Optimized Merge Sort (Two Pointers)

- **Time Complexity:** O(N log N)
- **Space Complexity:** O(N)

**Idea:**
Use two pointers while merging to count reverse pairs in linear time for each merge operation, achieving the optimal solution.

---

## Day 6 Summary

- Learned the extension of Boyer-Moore Voting Algorithm for finding elements appearing more than ⌊N/3⌋ times.
- Revised Dynamic Programming using both Top-Down and Bottom-Up approaches.
- Understood how Merge Sort can be optimized to solve Reverse Pairs efficiently in O(N log N).
