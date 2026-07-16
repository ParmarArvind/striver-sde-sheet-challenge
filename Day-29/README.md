# 📅 Day 29 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. String to Integer (atoi) (LeetCode)

**Approach:** String Parsing + Simulation

- **Time Complexity:** O(N)
- **Space Complexity:** O(1)

#### Key Learning

- Skipped leading whitespaces.
- Handled '+' and '-' signs.
- Parsed digits carefully.
- Managed integer overflow using `long long`.

---

### 2. Reverse Words in a String

#### **Approach 1: Reverse Traversal + Extra String**

- **Time Complexity:** O(N)
- **Space Complexity:** O(N)

##### Key Learning

- Traversed the string from the end.
- Extracted every word.
- Ignored multiple spaces.
- Built the answer using an extra string.

#### **Approach 2: In-place String Manipulation**

- **Time Complexity:** O(N)
- **Space Complexity:** O(1)

##### Key Learning

- Reversed the complete string.
- Copied only valid characters while removing extra spaces.
- Reversed every individual word.
- Trimmed trailing spaces.
- Achieved constant extra space.

---

### 3. Longest Palindromic Substring

**Approach:** DP + Memoization

- **Time Complexity:** O(N²)
- **Space Complexity:** O(N²)

#### Key Learning

- Used memoization for palindrome checking.
- Explored all possible substrings.
- Stored computed palindrome states to avoid recomputation.

---

### 4. Roman to Integer

**Approach:** Simulation

- **Time Complexity:** O(N)
- **Space Complexity:** O(1)

#### Key Learning

- Compared adjacent Roman numerals.
- Applied the subtraction rule whenever required.
- Converted the Roman numeral into an integer in a single traversal.

---

## 📚 Concepts Revised

- String Parsing
- Simulation
- String Traversal
- In-place String Manipulation
- Dynamic Programming
- Memoization
- Palindrome Problems
- Edge Case Handling