/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (!root) {
            return nullptr;
        }

        auto l = lowestCommonAncestor(root->left, p, q);
        if (l) {
            return l;
        }

        auto r = lowestCommonAncestor(root->right, p, q);
        if (r) {
            return r;
        }

        if (contains(root, p) && contains(root, q)) {
            return root;
        }

        return nullptr;
    }

    bool contains(TreeNode* root, TreeNode* p) {
        if (!root) {
            return false;
        }

        if (root == p) {
            return true;
        }


        if (contains(root->left, p)) {
            return true;
        }


        if (contains(root->right, p)) {
            return true;
        }

        return false;
    }
};