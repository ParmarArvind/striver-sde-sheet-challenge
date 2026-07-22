# 📅 Day 35 : Binary Trees (Part C)

## ✅ Problems Solved

| Problem | Approach | Time | Space |
|---------|----------|------|-------|
| Vertical Order Traversal of a Binary Tree | BFS + Horizontal Distance + Level-wise Sorting | O(N log N) | O(N) |
| Maximum Width of Binary Tree | BFS + Complete Binary Tree Indexing | O(N) | O(N) |
| Binary Tree Paths | DFS + Backtracking | O(N × H) | O(H) |

---

## 1️⃣ Vertical Order Traversal of a Binary Tree

### Approach
- Determine the horizontal distance range of the tree.
- Perform BFS while storing nodes according to their column.
- Process one level at a time.
- Sort nodes that belong to the same row and column before inserting them into the answer.
- Return columns from leftmost to rightmost.

### Complexity

- **Time:** O(N log N)
- **Space:** O(N)

---

## 2️⃣ Maximum Width of Binary Tree

### Approach

- Perform level order traversal.
- Assign indices to nodes following complete binary tree indexing.
- For every level, compute width using the first and last node indices.
- Update the maximum width encountered.

### Complexity

- **Time:** O(N)
- **Space:** O(N)

---

## 3️⃣ Binary Tree Paths

### Approach

- Traverse the tree using DFS.
- Maintain the current path as a string.
- When a leaf node is reached, store the path.
- Backtrack after returning from recursion.

### Complexity

- **Time:** O(N × H)
- **Space:** O(H)

---

## 📚 Concepts Learned

- Binary Trees
- BFS
- DFS
- Vertical Traversal
- Horizontal Distance
- Level Order Traversal
- Queue
- Backtracking
- Tree Paths