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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        ListNode* head1=l1;
        ListNode* head2=l2;

        while(head1 && head2)
        {
            int val=carry + head1->val+head2->val;
            temp->next=new ListNode(val%10);
            carry=val/10;
            head1=head1->next;
            head2=head2->next;
            temp=temp->next;
        }
        while(head1)
        {
            int val=carry + head1->val;
            temp->next=new ListNode(val%10);
            carry=val/10;
            head1=head1->next;
            temp=temp->next;
        }
        while(head2)
        {
            int val=carry + head2->val;
            temp->next=new ListNode(val%10);
            carry=val/10;
            head2=head2->next;
            temp=temp->next;
        }
        if(carry) temp->next=new ListNode(carry);

        return dummy->next;
    }
};