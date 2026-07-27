# Day 39 - Binary Trees (Part G)

Solved 3 Binary Tree problems covering mirror trees, tree flattening, and children sum property.

---

## Problems Solved

### 1. Symmetric Tree (LeetCode)

**Approach:** Recursive DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

**Idea:** Compare the left and right subtrees recursively in mirror order.

---

### 2. Flatten Binary Tree to Linked List (LeetCode)

### Approach 1: Preorder Traversal + Extra Array

**Time Complexity:** O(N)

**Space Complexity:** O(N)

**Idea:** Store preorder traversal and rebuild the linked list using right pointers.

### Approach 2: Recursive DFS

**Time Complexity:** O(N²) (Worst Case)

**Space Complexity:** O(H)

**Idea:** Flatten left and right subtrees, then connect them to form the linked list.

---

### 3. Children Sum Property (GFG)

**Approach:** Recursive DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

**Idea:** Verify every non-leaf node satisfies the children sum property.

---

## Topics Covered

- Mirror Trees
- Recursive DFS
- Tree Transformation
- Preorder Traversal
- Children Sum Property