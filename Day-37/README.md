/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    void left(Node* root,vector<int>&result)
    {
        if(!root) return ;
        if(root->left || root->right) result.push_back(root->data);
        else return ;
        
        if(root->left) left(root->left,result);
            
        else left(root->right,result);
        
    }
    void right(Node* root,vector<int>&result)
    {
        if(!root) return ;
        if(root->left || root->right) result.push_back(root->data);
        else return ;
        
        if(root->right) right(root->right,result);
        
        else right(root->left,result);
            
    }
    void leaf(Node* root,vector<int>&result)
    {
        if(!root) return ;
        if(!root->left && !root->right){
            result.push_back(root->data);
            return ;
        }
        
        leaf(root->left,result);
        leaf(root->right,result);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        vector<int>result;
        result.push_back(root->data);
        if(!root->left && !root->right) return result;
        
        //find all left side node
        left(root->left,result);
        
        // find all leaf nodes
        leaf(root,result);
        
         //find all right side nodes
        vector<int>temp;
        right(root->right,temp);
        
        for(int i=temp.size()-1 ;i>=0; i--) 
        {
            result.push_back(temp[i]);
        }
        return result;
    }
};