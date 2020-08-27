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
    int rangeSumBST(TreeNode* root, int L, int R) {
        return (root != nullptr &&
            root->val >= L &&
            root->val <= R ? root->val : 0) +
            (root->left != nullptr ? rangeSumBST(root->left, L, R) : 0) +
            (root->right != nullptr ? rangeSumBST(root->right, L, R) : 0);
    }
};