# 📅 Day 16 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Assign Cookies (LeetCode)

- **Approach:** Greedy + Sorting + Two Pointers
- **Time Complexity:** O(N log N + M log M)
- **Space Complexity:** O(1)

**Key Learning:**
- Learned how sorting both arrays helps make optimal greedy decisions.
- Used two pointers to assign the smallest valid cookie to each child.
- Strengthened understanding of greedy matching problems.

---

### 2. Coin Change (LeetCode)

#### Approach 1: Recursion + Memoization (Top-Down DP)

- **Time Complexity:** O(Amount × Number of Coins)
- **Space Complexity:** O(Amount × Number of Coins)

**Key Learning:**
- Practiced the Pick/Not Pick DP pattern.
- Learned how memoization removes overlapping recursive calls.
- Improved understanding of top-down dynamic programming.

#### Approach 2: Bottom-Up Dynamic Programming (Optimal)

- **Time Complexity:** O(Amount × Number of Coins)
- **Space Complexity:** O(Amount)

**Key Learning:**
- Converted the recursive solution into an iterative DP approach.
- Reduced space usage while maintaining the same time complexity.
- Understood when bottom-up DP is preferable over memoization.

---

### 3. Subset Sum Problem (GFG)

- **Approach:** Recursion + Memoization (Top-Down DP)
- **Time Complexity:** O(N × Sum)
- **Space Complexity:** O(N × Sum)

**Key Learning:**
- Reinforced the Pick/Not Pick recursion pattern.
- Learned to cache states based on index and remaining sum.
- Improved confidence in solving subset DP problems.

---

### 4. Subsets II (LeetCode)

#### Approach 1: Backtracking + Set

- **Time Complexity:** O(2ᴺ × log K)
- **Space Complexity:** O(2ᴺ)

**Key Learning:**
- Generated all subsets using recursion.
- Used a set to automatically eliminate duplicate subsets.
- Understood a straightforward way to handle duplicates.

#### Approach 2: Backtracking + Skip Duplicates (Optimal)

- **Time Complexity:** O(2ᴺ)
- **Space Complexity:** O(N)

**Key Learning:**
- Learned how sorting helps identify duplicate elements.
- Skipped duplicates during recursion instead of filtering later.
- Improved understanding of optimized backtracking techniques.

---

## 📚 Day 16 Summary

Today's focus was on **Greedy Algorithms, Dynamic Programming, and Backtracking**.

### Concepts Revised
- Greedy Strategy
- Sorting
- Two Pointer Technique
- Dynamic Programming (Top-Down & Bottom-Up)
- Memoization
- Backtracking
- Handling Duplicates
- Pick/Not Pick Pattern

### Progress
- ✅ Solved 4 problems
- ✅ Implemented both Top-Down and Bottom-Up DP
- ✅ Compared two approaches for Subsets II
- ✅ Strengthened Greedy, DP, and Backtracking fundamentals

---

**#45DaysOfCode #StriverSDEsheet #DSA #LeetCode #Cpp**