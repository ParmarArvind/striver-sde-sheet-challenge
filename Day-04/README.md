# 📅 Day 4 - Arrays (Part D)

## Problems Solved

### 1. Find the Duplicate Number

🔗 LeetCode 287

#### Approach 1: Sorting

* Time Complexity: O(N log N)
* Space Complexity: O(1)

**Idea:**
Sort the array and check adjacent elements. If two consecutive elements are equal, that element is the duplicate.

#### Approach 2: Cyclic Sort

* Time Complexity: O(N)
* Space Complexity: O(1)

**Idea:**
Place each number at its correct index. If a number is already present at its correct position, that number is the duplicate.

#### Approach 3: Visited Array

* Time Complexity: O(N)
* Space Complexity: O(N)

**Idea:**
Maintain a visited array to keep track of previously seen numbers. The first repeated number is the duplicate.

#### Approach 4: Floyd's Tortoise & Hare Algorithm

* Time Complexity: O(N)
* Space Complexity: O(1)

**Idea:**
Treat the array as a linked list where each value points to the next index. Use cycle detection to find the duplicate number without modifying the array.

### Key Learning

Explored multiple approaches for the same problem and learned Floyd's Cycle Detection Algorithm, which is the optimal solution for the follow-up requirement.

---

### 2. Count Inversions

🔗 GeeksforGeeks

#### Approach: Merge Sort

* Time Complexity: O(N log N)
* Space Complexity: O(N)

**Idea:**
While merging two sorted halves, whenever an element from the right half is placed before an element from the left half, all remaining elements in the left half form inversion pairs with that element.

### Key Learning

This problem showed how Merge Sort can be extended beyond sorting to efficiently count inversion pairs using the divide-and-conquer paradigm.

---

### 3. Repeat and Missing Number

🔗 GeeksforGeeks

#### Approach 1: Cyclic Sort + Sum Formula

* Time Complexity: O(N)
* Space Complexity: O(1)

**Idea:**
Use Cyclic Sort to identify the repeating element. Then use the expected sum of numbers from 1 to N to calculate the missing element.

#### Approach 2: Pure Cyclic Sort

* Time Complexity: O(N)
* Space Complexity: O(1)

**Idea:**
Place every element at its correct position. The index where the value does not match directly reveals both the repeating and missing numbers.

### Key Learning

Strengthened my understanding of Cyclic Sort and how it can solve multiple array problems involving numbers in the range [1...N].

---

## Day 4 Summary

✅ Explored 4 different approaches for finding a duplicate number

✅ Learned Floyd's Tortoise & Hare Cycle Detection Algorithm

✅ Applied Merge Sort to count inversion pairs efficiently

✅ Learned and understand how Cyclic Sort works

✅ Solved repeat and missing number using two O(N) approaches

🚀 Consistency over perfection. On to Day 5!
