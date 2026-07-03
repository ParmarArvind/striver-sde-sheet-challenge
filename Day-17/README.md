# 📅 Day 17 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Combination Sum (LeetCode)

- **Approach:** Backtracking (Pick / Not Pick)
- **Time Complexity:** O(2^(Target / MinCandidate))
- **Space Complexity:** O(Target / MinCandidate)

**Key Learning:**
- Learned the classic Pick/Not Pick recursion pattern.
- Understood how allowing the same index enables unlimited reuse of an element.
- Practiced generating all valid combinations through backtracking.

---

### 2. Combination Sum II (LeetCode)

- **Approach:** Backtracking + Sorting + Skip Duplicates
- **Time Complexity:** O(2ⁿ)
- **Space Complexity:** O(N)

**Key Learning:**
- Learned how sorting helps efficiently skip duplicate combinations.
- Understood the importance of checking duplicates at the same recursion level.
- Practiced solving combination problems where each element can be used only once.

---

### 3. Palindrome Partitioning (LeetCode)

- **Approach:** Backtracking + Palindrome Checking
- **Time Complexity:** O(N × 2ⁿ)
- **Space Complexity:** O(N)

**Key Learning:**
- Learned how to partition a string using recursive backtracking.
- Practiced validating each substring before extending the current partition.
- Strengthened understanding of recursive partitioning problems.

---

### 4. Permutation Sequence (LeetCode)

#### Approach 1: Backtracking

- **Time Complexity:** O(N × N!)
- **Space Complexity:** O(N)

**Key Learning:**
- Generated permutations recursively using a visited array.
- Counted permutations until reaching the k-th permutation.
- Understood why brute-force permutation generation becomes inefficient for larger values of N.

---

#### Approach 2: Factorial Number System (Optimal)

- **Time Complexity:** O(N²)
- **Space Complexity:** O(N)

**Key Learning:**
- Learned how factorial values represent the size of permutation blocks.
- Directly determined each digit of the k-th permutation without generating all permutations.
- Understood the mathematical optimization behind the expected interview solution.

---

## 📚 Day 17 Summary

Today's focus was on mastering **Backtracking** and learning how mathematical observations can optimize brute-force solutions.

### Concepts Revised

- Backtracking
- Pick / Not Pick Pattern
- Sorting
- Duplicate Handling
- Palindrome Checking
- Recursion
- Factorial Number System
- Combinatorial Search

### Progress

- ✅ Solved 4 problems
- ✅ Practiced multiple Backtracking patterns
- ✅ Learned how mathematical optimization can replace brute-force permutation generation

---

**#45DaysOfCode #StriverSDEsheet #DSA #LeetCode #Cpp**