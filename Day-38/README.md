# Day 38 - Binary Tree (Maximum Path Sum & Tree Construction)


## Problem 1: Binary Tree Maximum Path Sum

### Approach 1: Recursive DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

### Idea
- Recursively calculate the maximum path that can be extended upward from each node.
- At every node, consider paths through the left child, right child, and both children together.
- Update the global maximum whenever a better path is found.
- Return only one side (left or right) to the parent since a path cannot split upward.

---

## Problem 2: Construct Binary Tree from Preorder and Inorder Traversal

### Approach 1: Recursive DFS + HashMap

**Time Complexity:** O(N)

**Space Complexity:** O(N)

### Idea
- The next preorder element is always the current root.
- Use a hashmap to find its position in inorder in O(1).
- Recursively build the left subtree followed by the right subtree.
- Continue until all nodes are constructed.

---

## Problem 3: Construct Binary Tree from Inorder and Postorder Traversal

### Approach 1: Recursive DFS + HashMap

**Time Complexity:** O(N)

**Space Complexity:** O(N)

### Idea
- The last postorder element is always the current root.
- Locate the root in inorder using a hashmap.
- Build the right subtree first, then the left subtree.
- Continue recursively until the complete tree is formed.

---

## Key Learnings

- Learned how recursive functions can return partial answers while maintaining a global result.
- Understood how preorder, inorder, and postorder uniquely determine a binary tree.
- Improved understanding of recursive tree construction using traversal properties.
- Practiced optimizing recursive solutions using hash maps.