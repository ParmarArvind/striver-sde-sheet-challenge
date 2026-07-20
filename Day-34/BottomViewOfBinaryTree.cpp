/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int left;
    int right;
    void find(Node* root,int pointer )
    {
        if(!root) return ;
        left=min(left,pointer);
        right=max(right,pointer);
        find(root->left,pointer-1);
        find(root->right,pointer+1);       
    }
    void inorder(Node* root , vector<int>&result, vector<int>&level,int i,int L) 
    {
        if(!root) return ;
        int idx=i+abs(left);
        
        if(level[idx] <= L) 
        {
            result[idx]=root->data;
            level[idx]=L;
        }
        
        
        inorder(root->left,result,level,i-1,L+1);
        inorder(root->right,result,level,i+1,L+1);
        
    }
    vector<int> bottomView(Node *root ){
        // code here
        if(!root) return{};
        
        left=INT_MAX;
        right=INT_MIN;
        find(root,0);
        vector<int>result(right-left+1);
        vector<int>level(right-left+1,-1);
        
        inorder(root,result,level,0,0);
        return result;
    }
};