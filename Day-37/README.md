# 📅 Day 37 : Binary Trees (Part E)

## ✅ Problems Solved

| Problem | Approach | Time | Space |
|---------|----------|------|-------|
| Binary Tree Zigzag Level Order Traversal | BFS (Queue) | O(N) | O(N) |
| Same Tree | Recursive DFS | O(N) | O(H) |
| Same Tree | BFS (Queue) | O(N) | O(N) |
| Boundary Traversal of Binary Tree | DFS | O(N) | O(H) |
| Lowest Common Ancestor of Binary Tree | Recursive DFS | O(N) | O(H) |

---

## 1️⃣ Binary Tree Zigzag Level Order Traversal

### Approach

- Perform standard level order traversal using a queue.
- Maintain a boolean flag indicating traversal direction.
- Insert each node into the proper index of the current level.
- Toggle the direction after every level.

### Complexity

- **Time:** O(N)
- **Space:** O(N)

---

## 2️⃣ Same Tree

### Approach 1 : Recursive DFS

- Compare both nodes recursively.
- If both are NULL, return true.
- If only one is NULL or values differ, return false.
- Recursively compare left and right subtrees.

### Complexity

- **Time:** O(N)
- **Space:** O(H)

### Approach 2 : BFS

- Store node pairs in a queue.
- Compare values level by level.
- Check the existence of corresponding children.
- Continue until the queue becomes empty.

### Complexity

- **Time:** O(N)
- **Space:** O(N)

---

## 3️⃣ Boundary Traversal of Binary Tree

### Approach

- Add root.
- Traverse left boundary excluding leaf nodes.
- Collect all leaf nodes.
- Traverse right boundary excluding leaves.
- Reverse the right boundary before appending.

### Complexity

- **Time:** O(N)
- **Space:** O(H)

---

## 4️⃣ Lowest Common Ancestor of Binary Tree

### Approach

- Return NULL if current node is NULL.
- Return current node if it matches either target.
- Search both left and right subtrees.
- If both return non-null, current node is the LCA.
- Otherwise return whichever subtree contains the target.

### Complexity

- **Time:** O(N)
- **Space:** O(H)

---

## 📚 Concepts Learned

- Queue
- BFS
- DFS
- Zigzag Traversal
- Recursive Tree Traversal
- Boundary Traversal
- Lowest Common Ancestor
- Binary Tree Recursion
