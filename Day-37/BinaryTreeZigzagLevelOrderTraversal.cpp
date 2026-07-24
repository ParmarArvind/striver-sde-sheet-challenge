class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> result;
        queue<TreeNode*> que;
        que.push(root);
        bool leftToRight = true;
        while (!que.empty()) {
            int size = que.size();
            vector<int> level(size);

            for (int i = 0; i < size; ++i) {
                TreeNode* node = que.front();
                que.pop();

                int index = leftToRight ? i : size - 1 - i;
                level[index] = node->val;

                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }

            result.push_back(level);
            leftToRight = !leftToRight;
        }

        return result;
    }
};