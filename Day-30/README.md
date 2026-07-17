# 📅 Day 30 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Longest Common Prefix *(LeetCode)*

**Approach:** Character-by-Character Comparison

- **Time Complexity:** **O(N × M)**
- **Space Complexity:** **O(1)**

#### 💡 Key Learning

- Used the first string as the reference for comparison.
- Compared characters at the same index across all strings.
- Stopped immediately when a mismatch or shorter string was encountered.
- Returned the common prefix using `substr()`.

---

### 2. Repeated String Match *(LeetCode)*

**Approach:** KMP (Knuth-Morris-Pratt)

- **Time Complexity:** **O(N + M)**
- **Space Complexity:** **O(M)**

#### 💡 Key Learning

- Constructed the **LPS (Longest Prefix Suffix)** array for the pattern.
- Used the KMP algorithm for efficient substring searching.
- Repeated string **a** until its length became at least the length of **b**.
- Performed one additional repetition to handle overlap cases before returning `-1`.

---

### 3. Valid Anagram *(LeetCode)*

**Approach:** Frequency Counting

- **Time Complexity:** **O(N)**
- **Space Complexity:** **O(1)**

#### 💡 Key Learning

- Counted the frequency of every lowercase character using fixed-size arrays.
- Compared the frequency arrays to determine whether both strings were anagrams.
- Achieved linear-time verification without sorting.

---

# 📚 Concepts Revised

- String Traversal
- Prefix Matching
- KMP (Knuth-Morris-Pratt) Algorithm
- LPS (Longest Prefix Suffix) Array
- Frequency Counting
- Character Frequency Arrays
- Efficient String Matching
- String Manipulation
- Pattern Searching