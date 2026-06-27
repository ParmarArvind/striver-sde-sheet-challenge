# 📘 Day 7 - Arrays (Part G)

## Problems Solved

### 1. Two Sum

🔗 LeetCode 1

#### Approach 1: Brute Force

* **Time Complexity:** O(N²)
* **Space Complexity:** O(1)

**Idea:**
Check every possible pair of elements and return the indices when their sum equals the target.

#### Approach 2: Sorting + Two Pointers

* **Time Complexity:** O(N log N)
* **Space Complexity:** O(N)

**Idea:**
Store each element with its original index, sort the array, and use two pointers to find the target sum.

#### Approach 3: Hash Map (Optimal)

* **Time Complexity:** O(N)
* **Space Complexity:** O(N)

**Idea:**
Traverse the array once while storing visited numbers in a hash map. For each element, check whether its complement already exists.

---

### 2. Longest Consecutive Sequence

🔗 LeetCode 128

#### Approach 1: Sorting

* **Time Complexity:** O(N log N)
* **Space Complexity:** O(1)

**Idea:**
Sort the array and count consecutive elements while skipping duplicate values.

#### Approach 2: Priority Queue

* **Time Complexity:** O(N log N)
* **Space Complexity:** O(N)

**Idea:**
Insert all elements into a min-heap and process them in sorted order while counting consecutive numbers.

#### Approach 3: Hash Set (Optimal)

* **Time Complexity:** O(N)
* **Space Complexity:** O(N)

**Idea:**
Store all elements in a hash set. Start counting only from numbers that do not have a previous consecutive element.

---

### 3. 4Sum

🔗 LeetCode 18

#### Approach: Sorting + Two Pointers

* **Time Complexity:** O(N³)
* **Space Complexity:** O(1) (excluding output)

**Idea:**
Sort the array, fix two elements, and use two pointers to find the remaining pair while avoiding duplicate quadruplets.

---

## Day 7 Summary

### Concepts Learned

- Hash Map
- Hash Set
- Two Pointers
- Sorting
- Duplicate Handling
- Integer Overflow Handling

### Problems Completed

- ✅ Two Sum
- ✅ Longest Consecutive Sequence
- ✅ 4Sum

**Total Problems Solved Today:** 3 🚀