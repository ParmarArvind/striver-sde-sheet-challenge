/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int result;
    void solve(Node* root, int k)
    {
        if(!root) return ;
        if(root->data==k)
        {
            result=root->data;
            return ;
        }
        if(root->data <k)
        {
            result=root->data;
            solve(root->right,k);
            return ;
        }
        if(root->data >k) solve(root->left,k);
    }
    int findMaxFork(Node* root, int k) {
        // code here
        result=-1;
        solve(root,k);
        
        return result;
        
    }
};