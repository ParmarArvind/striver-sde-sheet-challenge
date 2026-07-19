# 📅 Day 32 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Compare Version Numbers (LeetCode)

#### Approach

**Approach:** String Tokenization + Simulation

**Time Complexity:** O(N + M)

**Space Complexity:** O(N + M)

#### 💡 Key Learning

- Split both version strings using '.' as the delimiter.
- Converted each revision into an integer.
- Compared revisions one by one.
- Considered missing revisions as 0.
- Returned the result immediately after the first mismatch.

---

### 2. Count and Say (LeetCode)

#### Approach 1

**Approach:** Recursion + Run-Length Encoding (RLE)

**Time Complexity:** O(L × N)

**Space Complexity:** O(L × N)

#### 💡 Key Learning

- Used recursion to generate each sequence.
- Applied Run-Length Encoding (RLE) on the current string.
- Constructed the next sequence by counting consecutive characters.
- Continued recursively until reaching the required term.

---

#### Approach 2

**Approach:** Iterative Run-Length Encoding (RLE)

**Time Complexity:** O(L × N)

**Space Complexity:** O(L)

#### 💡 Key Learning

- Eliminated recursion using iteration.
- Generated each sequence from the previous one.
- Counted consecutive characters efficiently.
- Produced the same result with simpler control flow.

---

## 📚 Concepts Revised

- String Parsing
- Version Comparison
- Tokenization
- Simulation
- Run-Length Encoding (RLE)
- Recursion
- Iterative Algorithms
- String Manipulation