/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 
class Solution {
public:
    int n;
    TreeNode* makeTree(vector<int>& preorder ,unordered_map<int,int> &mp ,int &preIdx ,int i,int j)
    {
        
        if(i>j)
        {
            return nullptr;
        }
        int idx=mp[preorder[preIdx]];

        TreeNode* root=new TreeNode(preorder[preIdx]);

        preIdx++;
        root->left=makeTree(preorder ,mp, preIdx , i,idx-1);

        root->right=makeTree(preorder ,mp, preIdx , idx+1,j);

        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        n=inorder.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]]=i;
        }
        int preIdx=0;
        return makeTree(preorder , mp , preIdx ,0 ,n-1);
    }
};



// class Solution {
// public:
//     TreeNode* solve(vector<int>&preorder ,vector<int> & inorder ,int start,int end, int& idx)
//     {
//         if(start>end) return nullptr;
//         int rootVal=preorder[idx];
       
//         int i=start;
//         for(; i<=end;i++)
//         {
//             if(rootVal==inorder[i]) break;
//         }
//         idx++;

//         TreeNode* root=new TreeNode(rootVal);
//         root->left=solve(preorder,inorder,start,i-1,idx);
//         root->right=solve(preorder,inorder,i+1,end,idx);
//         return root;
//     }
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int n=preorder.size();
//         int idx=0;
//         return solve(preorder,inorder,0,n-1,idx);
//     }
// };