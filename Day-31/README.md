# 📅 Day 31 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Minimum Insertion Steps to Make a String Palindrome *(LeetCode)*

**Approach:** Longest Palindromic Subsequence (LCS + Memoization)

- **Time Complexity:** **O(N²)**
- **Space Complexity:** **O(N²)**

#### 💡 Key Learning

- Converted the problem into finding the **Longest Palindromic Subsequence (LPS)**.
- Computed **LCS between the string and its reverse**.
- Used memoization to optimize recursive LCS computation.
- Calculated the answer using:

  **Minimum Insertions = Length − LPS**

---

### 2. Find the Index of the First Occurrence in a String *(LeetCode)*

#### Approach 1
**Approach:** Brute Force

- **Time Complexity:** **O((N − M + 1) × M)**
- **Space Complexity:** **O(1)**

#### 💡 Key Learning

- Checked every possible starting index.
- Compared characters one by one.
- Returned immediately after finding the first complete match.

#### Approach 2

**Approach:** KMP (Knuth-Morris-Pratt)

- **Time Complexity:** **O(N + M)**
- **Space Complexity:** **O(M)**

#### 💡 Key Learning

- Constructed the **LPS (Longest Prefix Suffix)** array.
- Skipped redundant comparisons using previously computed prefix information.
- Achieved linear-time substring searching.

---

### 3. Search Pattern *(GeeksforGeeks)*

**Approach:** KMP (Knuth-Morris-Pratt)

- **Time Complexity:** **O(N + M)**
- **Space Complexity:** **O(M)**

#### 💡 Key Learning

- Built the **LPS (Longest Prefix Suffix)** array.
- Used KMP traversal to efficiently search the pattern in the text.
- Eliminated unnecessary backtracking during matching.
- Returned all matching starting indices in linear time.

---

## 📚 Concepts Revised

- Longest Common Subsequence (LCS)
- Longest Palindromic Subsequence (LPS)
- Memoization
- Dynamic Programming on Strings
- Pattern Matching
- Naive String Matching
- KMP Algorithm
- LPS Array
- Efficient Substring Search
- String Manipulation
