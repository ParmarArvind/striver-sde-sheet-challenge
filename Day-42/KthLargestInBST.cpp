
/* Structure of a Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/


class Solution {
public:
// method 2
    void inorder(Node* root, int &k, int &ans)
    {
        if(!root) return;
        inorder(root->right, k, ans);

        k--;
        if(k == 0)
        {
            ans = root->data;
            return;
        }
        inorder(root->left, k, ans);
    }

    int kthLargest(Node* root, int k) {
        int ans = -1;
        inorder(root, k, ans);
        return ans;
    }
};



// class Solution {
// public:
//     // method 1 
//     void inorder(Node* root,vector<int>&temp)
//     {
//         if(!root) return ;
//         inorder(root->left,temp);
//         temp.push_back(root->data);
//         inorder(root->right ,temp);
//     }
    
//     int kthLargest(Node* root, int k) {
//         vector<int>temp;
//         inorder(root,temp);
//         int n=temp.size();
//         return temp[n-k];
//     }
// };