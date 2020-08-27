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
    int sumEvenGrandparent(TreeNode* root) {
        // root is grandparent
        if (!root) {
            return 0;
        }

        TreeNode* lparent = root->left;
        TreeNode* rparent = root->right;
        if (root->val % 2 == 0) {
            TreeNode* llchild = nullptr;
            TreeNode* lrchild = nullptr;
            if (lparent) {
                llchild = lparent->left;
                lrchild = lparent->right;
            }


            TreeNode* rlchild = nullptr;
            TreeNode* rrchild = nullptr;
            if (rparent) {
                rlchild = rparent->left;
                rrchild = rparent->right;
            }

            return (llchild == nullptr ? 0 : llchild->val) +
                (lrchild == nullptr ? 0 : lrchild->val) +
                (rlchild == nullptr ? 0 : rlchild->val) +
                (rrchild == nullptr ? 0 : rrchild->val) +
                sumEvenGrandparent(lparent) + sumEvenGrandparent(rparent);
        }
        else {
            return sumEvenGrandparent(lparent) + sumEvenGrandparent(rparent);
        }
    }
};