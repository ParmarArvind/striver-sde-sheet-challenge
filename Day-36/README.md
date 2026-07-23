# 📅 Day 36 : Binary Trees (Part D)

## ✅ Problems Solved

| Problem | Approach | Time | Space |
|---------|----------|------|-------|
| Maximum Depth of Binary Tree | DFS (Recursive Height) | O(N) | O(H) |
| Diameter of Binary Tree | Single DFS Traversal | O(N) | O(H) |
| Binary Tree Level Order Traversal | BFS (Queue) | O(N) | O(N) |
| Balanced Binary Tree | DFS + Height Calculation | O(N) | O(H) |

---

## 1️⃣ Maximum Depth of Binary Tree

### Approach

- Recursively compute the height of the left and right subtrees.
- Return `1 + max(leftHeight, rightHeight)`.
- The final height represents the maximum depth of the tree.

### Complexity

- **Time:** O(N)
- **Space:** O(H)

---

## 2️⃣ Diameter of Binary Tree

### Approach

- Compute subtree heights recursively.
- At every node, update the diameter using:
  `leftHeight + rightHeight`
- Return subtree height to the parent.
- Entire diameter is obtained in a single DFS traversal.

### Complexity

- **Time:** O(N)
- **Space:** O(H)

---

## 3️⃣ Binary Tree Level Order Traversal

### Approach

- Perform Breadth First Search using a queue.
- Process one level at a time.
- Store nodes belonging to the current level before moving to the next.

### Complexity

- **Time:** O(N)
- **Space:** O(N)

---

## 4️⃣ Balanced Binary Tree

### Approach

- Compute the height of every subtree recursively.
- Check whether the difference between left and right subtree heights is at most one.
- If any node violates the condition, the tree is not balanced.

### Complexity

- **Time:** O(N)
- **Space:** O(H)

---

## 📚 Concepts Learned

- Binary Trees
- DFS
- BFS
- Height of Binary Tree
- Diameter of Binary Tree
- Level Order Traversal
- Queue
- Balanced Trees
- Tree Recursion