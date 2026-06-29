/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;
        while(n--)
        {
            fast=fast->next;
        }
        while(fast)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        if(slow==head) return head->next;
        if(!prev) return nullptr;
        prev->next=slow->next;
        
        return head;
        
    }
};