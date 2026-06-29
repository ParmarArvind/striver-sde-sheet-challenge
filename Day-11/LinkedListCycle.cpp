/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    //method 1 (hashmap)
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        ListNode* temp=head;
        while(temp) 
        {
            if(st.count(temp)) return true;
            st.insert(temp);
            temp=temp->next;
        }

        return false;
    }
};

// method -2 two pointer
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head, *slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                return true;
        }

        return false;  // No cycle
    }
};