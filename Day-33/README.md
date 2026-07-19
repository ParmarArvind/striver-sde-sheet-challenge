# 📅 Day 33 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Binary Tree Inorder Traversal (LeetCode)

#### Approach 1

**Approach:** Recursive DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

#### 💡 Key Learning

- Implemented recursive inorder traversal.
- Visited nodes in Left → Root → Right order.
- Learned the basic DFS traversal of binary trees.

---

#### Approach 2

**Approach:** Iterative Traversal (Stack)

**Time Complexity:** O(N)

**Space Complexity:** O(H)

#### 💡 Key Learning

- Used an explicit stack to simulate recursion.
- Traversed without recursive function calls.
- Understood stack-based DFS traversal.

---

#### Approach 3

**Approach:** Morris Traversal

**Time Complexity:** O(N)

**Space Complexity:** O(1)

#### 💡 Key Learning

- Eliminated recursion and stack usage.
- Created temporary threaded links.
- Restored the original tree structure after traversal.
- Achieved constant auxiliary space.

---

### 2. Binary Tree Preorder Traversal (LeetCode)

#### Approach 1

**Approach:** Recursive DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

#### 💡 Key Learning

- Visited Root → Left → Right.
- Implemented preorder traversal recursively.
- Strengthened recursive DFS concepts.

---

#### Approach 2

**Approach:** Iterative Traversal (Stack)

**Time Complexity:** O(N)

**Space Complexity:** O(H)

#### 💡 Key Learning

- Used a stack instead of recursion.
- Pushed the right child before the left child.
- Processed nodes in preorder sequence efficiently.

---

### 3. Binary Tree Postorder Traversal (LeetCode)

#### Approach 1

**Approach:** Recursive DFS

**Time Complexity:** O(N)

**Space Complexity:** O(H)

#### 💡 Key Learning

- Followed Left → Right → Root order.
- Implemented recursive postorder traversal.
- Understood postorder recursion flow.

---

#### Approach 2

**Approach:** Iterative Traversal (Single Stack)

**Time Complexity:** O(N)

**Space Complexity:** O(H)

#### 💡 Key Learning

- Simulated recursion using a stack and visit count.
- Visited every node exactly once.
- Learned iterative postorder traversal using one stack.
