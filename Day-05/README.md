# 🗓️ Day 5 - Arrays (Part E)

## Problems Solved

### 1. Majority Element

🔗 LeetCode 169

#### Approach 1 : HashMap

- Time Complexity: **O(N)**
- Space Complexity: **O(N)**

**Idea**

Count the frequency of every element using a HashMap and return the element whose frequency becomes greater than `n/2`.

---

#### Approach 2 : Boyer-Moore Voting Algorithm

- Time Complexity: **O(N)**
- Space Complexity: **O(1)**

**Idea**

Maintain a candidate and a counter. Whenever the counter becomes zero, choose the current element as the new candidate. Increase the counter for the same element and decrease it for different elements.

---

### 2. Pow(x, n)

🔗 LeetCode 50

#### Approach 1 : Binary Exponentiation

- Time Complexity: **O(log N)**
- Space Complexity: **O(log N)** (Recursive)

**Idea**

Recursively compute the answer for half the exponent and reuse it. This reduces repeated multiplications and efficiently handles very large powers.

---

### 3. Search a 2D Matrix

🔗 LeetCode 74

#### Approach 1 : Brute Force

- Time Complexity: **O(M × N)**
- Space Complexity: **O(1)**

**Idea**

Traverse every element until the target is found.

---

#### Approach 2 : Row Selection + Binary Search

- Time Complexity: **O(M + log N)**
- Space Complexity: **O(1)**

**Idea**

Find the row whose last element is greater than or equal to the target, then perform Binary Search in that row.

---

#### Approach 3 : Binary Search on Rows + Binary Search on Columns

- Time Complexity: **O(log M + log N)**
- Space Complexity: **O(1)**

**Idea**

Use Binary Search to identify the correct row and then another Binary Search within that row to locate the target efficiently.

---

## Day 5 Summary

✔ Solved **3 Problems**

✔ Explored **6 Different Approaches**

✔ Learned:
- Binary Exponentiation
- Boyer-Moore Voting Algorithm
- Binary Search on 2D Matrix

🚀 On to Day 6.