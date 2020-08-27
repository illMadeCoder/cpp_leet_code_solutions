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
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }
        auto hl = height(root->left);

        auto hr = height(root->right);

        auto d = abs(hl - hr);

        return (d == 0 || d == 1) && isBalanced(root->left) && isBalanced(root->right);
    }

    int height(TreeNode* root) {
        if (!root) {
            return 0;
        }
        auto hl = 0;
        if (root->left) {
            hl = height(root->left);
        }

        auto hr = 0;
        if (root->right) {
            hr = height(root->right);
        }

        return max(hl, hr) + 1;
    }
};