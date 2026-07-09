# 📅 Day 23 - Striver SDE Sheet Challenge

## ✅ Problems Solved

### 1. Top K Frequent Elements (LeetCode)

- **Approach:** Hash Map + Min Heap
- **Time Complexity:** O(N log K)
- **Space Complexity:** O(N + K)

**Key Learning:**
- Used a hash map to count element frequencies.
- Maintained a Min Heap of size K to efficiently track the K most frequent elements.
- Reinforced the use of Priority Queues for frequency-based problems.

---

### 2. Merge K Sorted Arrays (GFG)

#### Approach 1: Flatten + Sort

- **Time Complexity:** O((N × M) log(N × M))
- **Space Complexity:** O(N × M)

**Key Learning:**
- Flattened all arrays into one and sorted the result.
- Simple approach but uses extra memory and sorting time.

#### Approach 2: Min Heap (Optimal)

- **Time Complexity:** O((N × M) log N)
- **Space Complexity:** O(N)

**Key Learning:**
- Used a Min Heap to merge all sorted arrays efficiently.
- Stored the value, row index, and column index in the heap.
- Learned the classic K-way merge technique.

---

### 3. Find Median from Data Stream (LeetCode)

- **Approach:** Two Heaps (Max Heap + Min Heap)
- **Time Complexity:**
  - addNum() → O(log N)
  - findMedian() → O(1)
- **Space Complexity:** O(N)

**Key Learning:**
- Maintained two balanced heaps to split the stream into lower and upper halves.
- Rebalanced heaps after every insertion.
- Retrieved the median in constant time.

---

## 📚 Day 23 Summary

Today's focus was on **Heap-based optimization problems** and **stream processing**.

### Concepts Revised

- Priority Queue
- Min Heap
- Max Heap
- Hash Map
- K-way Merge
- Running Median
- Heap Balancing

### Progress

- ✅ Solved 3 problems
- ✅ Practiced advanced Heap applications
- ✅ Learned efficient techniques for streaming and merging problems

---

**#45DaysOfCode #StriverSDEsheet #DSA #LeetCode #Cpp**