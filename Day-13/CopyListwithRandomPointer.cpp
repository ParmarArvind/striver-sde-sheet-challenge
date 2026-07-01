/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
// method -1 TC=o(n) sc=o(n)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy=new Node(0);
        unordered_map<Node* ,Node*> mp; // old node -> new node

        Node * temp1=head;
        Node* temp2=dummy;
        while(temp1)
        {
            temp2->next=new Node(temp1->val);
            temp2=temp2->next;
            mp[temp1]=temp2;
            temp1=temp1->next;
        }

        temp1=head;
        while(temp1)
        {
            Node *oldNode=temp1;
            if(!oldNode->random) mp[oldNode]->random=nullptr;
            else {
                mp[oldNode]->random = mp[oldNode->random];
            }

            temp1=temp1->next;
        }

        return dummy->next;


    }
};