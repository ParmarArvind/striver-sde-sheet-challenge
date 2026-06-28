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
    // method 1 iterative
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        return prev;
    }
}; 


class Solution {
public:
//method 2 recursive
    ListNode* reverseLL(ListNode* prev,ListNode* curr)
    {
        if(!curr) return prev;
        ListNode* next=curr->next;
        curr->next=prev;
        
        return reverseLL(curr,next);
    }
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* prev=nullptr;
        ListNode* curr=head;

        return reverseLL(prev,curr);
    }
};