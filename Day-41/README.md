# Day 41 - Binary Search Trees (Part B)

Solved 3 Binary Search Tree problems covering BST construction, validation, and predecessor/successor.

---

## Problems Solved

### 1. Construct Binary Search Tree from Preorder Traversal (LeetCode)

**Approach:** Divide & Conquer (Recursion)

**Time Complexity:** O(N log N)

**Space Complexity:** O(H)

**Idea:** Build the BST recursively by partitioning preorder into left and right subtrees.

---

### 2. Validate Binary Search Tree (LeetCode)

**Approach:** Recursive DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

**Idea:** Verify every subtree satisfies the BST property using subtree minimum and maximum values.

---

### 3. Predecessor and Successor (GFG)

**Approach:** DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

**Idea:** Traverse the tree and keep updating the nearest smaller and larger nodes.

---

## Topics Covered

- Binary Search Tree
- BST Construction
- BST Validation
- Predecessor & Successor
- DFS
- Recursion