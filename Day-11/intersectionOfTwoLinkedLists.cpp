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
//method -1 using hashset
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>st;
        ListNode* temp=headA;
        while(temp){
            st.insert(temp);
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            if(st.find(temp)!=st.end()) return temp;
            temp=temp->next;
        }

        return nullptr;

    }
};


class Solution {
public:
    // method -2 two pointer switching 
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while (temp1 != temp2) {
            temp1 = !temp1 ? headB : temp1->next;
            temp2 = !temp2 ? headA : temp2->next;
        }

        return temp1;
    }
};

//  method-3 (I used this method when i solved this question last time )

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA = 1;
        int countB = 1;

        ListNode*tempA = headA;
        ListNode*tempB = headB;

        while(tempA->next != NULL){
            countA++;
            tempA = tempA->next;
        }

        while(tempB->next != NULL){
            countB++;
            tempB = tempB->next;
        }

        int k = abs(countA-countB);
        ListNode* currA = headA;
        ListNode* currB = headB;
        if(countB > countA){
            while(k){
                currB = currB->next;
                k--;
            }
        }
        else{
            while(k){
                currA = currA->next;
                k--;
            }
        }

        while(currA != NULL && currB != NULL){
            if(currA == currB) return currA;
            currA = currA->next;
            currB = currB->next;
        }
        return NULL;
    }
};