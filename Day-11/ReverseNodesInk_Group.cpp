class Solution {
public:
    //method -1 recusive
    ListNode* reverseKGroup(ListNode* head, int k) {

        int n = 0;
        ListNode* temp = head;
        while (temp) {
            n++;
            temp = temp->next;
        }

        ListNode* curr = head;
        bool headFound=false;

        while (n >= k) {

            ListNode* start = curr;
            ListNode* prev = nullptr;

            int i = k;
            bool isReversed=false;
            // Same reversal logic as yours
            while (i--) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                isReversed=true;
            }

            if(!headFound){
                head=prev;
                headFound=true;
            }
            
            if(isReversed) 
            start->next = prev;
            else start->next=curr;

            n -= k;
        }

        return head;
    }
};