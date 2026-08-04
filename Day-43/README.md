# Day 43 - Binary Search Trees (Part D)

Solved 3 Binary Search Tree problems covering pair search, BST iterator, and maximum sum BST.

---

## Problems Solved

### 1. Two Sum IV - Input is a BST (LeetCode)

**Approach 1:** Inorder Traversal + Two Pointers

**Time Complexity:** O(N)

**Space Complexity:** O(N)

**Approach 2:** Inorder Traversal + BST Search

**Time Complexity:** O(N × H)

**Space Complexity:** O(H)

**Idea:** Convert the BST into a sorted sequence using inorder traversal, or search for the required complement directly inside the BST.

---

### 2. Binary Search Tree Iterator (LeetCode)

**Approach:** Inorder Traversal + Vector

**Time Complexity:** O(N)

**Space Complexity:** O(N)

**Idea:** Precompute inorder traversal and iterate over the sorted values using an index.

---

### 3. Maximum Sum BST in Binary Tree (LeetCode)

**Approach:** Postorder DFS + Bottom-Up Information

**Time Complexity:** O(N)

**Space Complexity:** O(H)

**Idea:** Every recursive call returns subtree sum, BST validity, minimum value, and maximum value. Update the answer whenever a valid BST subtree is found.

---

## Topics Covered

- Binary Search Tree
- Inorder Traversal
- Two Pointer Technique
- BST Search
- BST Iterator
- Postorder Traversal
- Tree Dynamic Programming
- Maximum Sum BST