# 📅 Day 34 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Top View of Binary Tree (GeeksforGeeks)

**Approach:** DFS + Horizontal Distance + Level Tracking

**Time Complexity:** O(N)

**Space Complexity:** O(N)

### 💡 Key Learning

- Computed the horizontal distance (HD) range of the tree.
- Stored the first node encountered for every horizontal distance.
- Used depth (level) to ensure only the topmost node was selected.
- Constructed the answer from leftmost to rightmost horizontal distance.

---

### 2. Bottom View of Binary Tree (GeeksforGeeks)

**Approach:** DFS + Horizontal Distance + Level Tracking

**Time Complexity:** O(N)

**Space Complexity:** O(N)

### 💡 Key Learning

- Calculated the horizontal distance of every node.
- Updated the answer whenever a deeper node appeared at the same horizontal distance.
- Maintained the deepest node for each vertical line.
- Returned the bottom-most visible nodes from left to right.

---

### 3. Binary Tree Right Side View (LeetCode)

**Approach:** DFS + Level-wise Overwrite

**Time Complexity:** O(N)

**Space Complexity:** O(H)

### 💡 Key Learning

- Calculated the height of the tree.
- Used DFS while storing one node for every level.
- Since the right subtree was visited after the left subtree, it naturally overwrote previous values.
- Obtained the nodes visible from the right side of the tree.

---

## 📚 Concepts Revised

- Binary Trees
- Depth First Search (DFS)
- Horizontal Distance
- Level Tracking
- Tree Views
- Top View
- Bottom View
- Right Side View
- Tree Height
- Recursive Traversal