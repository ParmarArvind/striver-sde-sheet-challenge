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

 //method -1 tc =O(n) , SC=o(n)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next)
        {
            arr.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;
            
        }
        if(fast) slow=slow->next;
        int n=arr.size();
        int i=n-1;
        while(i>=0)
        {
            if(slow->val != arr[i]) return false;
            slow=slow->next;
            i--;
        }

        return true;

    }
};


// method -2 TC=o(n) SC=(1)
class Solution {
public:
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

    bool isPalindrome(ListNode* head) {
        // first find mid point
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast) slow=slow->next;

        //reverse the LL after mid part
        ListNode* mid=reverseList(slow);

        slow=head;
        while(mid)
        {
            if(mid->val != slow->val) return false;
            mid=mid->next;
            slow=slow->next;
        }

        return true;

    }
};