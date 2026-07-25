class Solution {
public:

    TreeNode* makeTree(vector<int>& postorder,unordered_map<int, int>& mp,int& postIdx,int left ,int right)
    {
        if (left > right)
            return nullptr;

        int rootVal = postorder[postIdx];
        postIdx--;
        TreeNode* root = new TreeNode(rootVal);

        int mid = mp[rootVal];

        // Build right subtree first
        root->right = makeTree(postorder, mp, postIdx, mid + 1, right);

        // Then build left subtree
        root->left = makeTree(postorder, mp, postIdx, left, mid - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        unordered_map<int, int> mp;

        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        int postIdx = postorder.size() - 1;

        return makeTree(postorder, mp, postIdx, 0, inorder.size() - 1);
    }
};



// class Solution {
// public:
//     TreeNode* solve(vector<int>& inorder, vector<int>& postorder ,int inStart, int inEnd, int postStart, int postEnd )
//     {
//         if(inStart>inEnd) return NULL;
//         TreeNode* root=new TreeNode(postorder[postEnd]);
//         int i=inStart;
//         for(;i<=inEnd;i++)
//         {
//             if(root->val==inorder[i]) break;
//         }
//         int leftSize=i-inStart;
//         int rightSize=inEnd-i;
//         root->left=solve(inorder,postorder,inStart,i-1,postStart,postStart+leftSize-1);
//         root->right=solve(inorder,postorder,i+1,inEnd,postEnd-rightSize,postEnd-1);

//         return root;
//     }
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

//         int n=inorder.size();
//         int inStart=0;
//         int inEnd=n-1;
//         int postStart=0;
//         int postEnd=n-1;

//         return solve(inorder,postorder,inStart,inEnd,postStart,postEnd);
//     }
// };