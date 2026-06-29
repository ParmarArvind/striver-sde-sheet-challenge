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
//method -1 tc=o(n) ,sc=o(1)
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool isCycle=false;
        //detect cycle
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) {
                isCycle=true;
                break;
            }
        }

        if(!isCycle) return nullptr;
        //detect position
        slow=head;
        while(slow!=fast) {
            slow=slow->next;
            fast=fast->next;
        }

        return slow;
    }
};