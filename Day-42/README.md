# Day 42 - Binary Search Trees (Part C)

Solved 4 Binary Search Tree problems covering floor, ceil, and kth order statistics.

---

## Problems Solved

### 1. Floor in BST (GFG)

**Approach:** DFS (BST Traversal)

**Time Complexity:** O(H)

**Space Complexity:** O(H)

**Idea:** Traverse the BST and keep updating the largest value less than or equal to k.

---

### 2. Ceil in BST (GFG)

**Approach:** DFS (BST Traversal)

**Time Complexity:** O(H)

**Space Complexity:** O(H)

**Idea:** Traverse the BST and keep updating the smallest value greater than or equal to k.

---

### 3. Kth Smallest Element in a BST (LeetCode)

**Approach 1:** Inorder Traversal + Vector

**Time Complexity:** O(N)

**Space Complexity:** O(N)

**Approach 2:** Inorder Traversal + Counter

**Time Complexity:** O(N)

**Space Complexity:** O(H)

**Idea:** Use inorder traversal because BST visits nodes in sorted order.

---

### 4. Kth Largest in BST (GFG)

**Approach 1:** Inorder Traversal + Vector

**Time Complexity:** O(N)

**Space Complexity:** O(N)

**Approach 2:** Reverse Inorder Traversal + Counter

**Time Complexity:** O(N)

**Space Complexity:** O(H)

**Idea:** Use reverse inorder traversal to visit BST nodes in descending order.

---

## Topics Covered

- Binary Search Tree
- Floor & Ceil
- Inorder Traversal
- Reverse Inorder Traversal
- Kth Smallest
- Kth Largest