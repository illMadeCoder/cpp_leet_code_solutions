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
    int deepestLeavesSum(TreeNode* root) {
        if (!root) {
            return 0;
        }

        if (!root->left && !root->right) {
            return root->val;
        }

        auto leavesValDepths = leavesValDepth(root, 0);

        auto max = 0;
        for (const tuple<int, int>& v : leavesValDepths) {
            max = max < get<1>(v) ? get<1>(v) : max;
        }

        auto sum = 0;
        for (const tuple<int, int>& v : leavesValDepths) {
            if (get<1>(v) == max) {
                sum += get<0>(v);
            }
        }

        return sum;
    }

    using ValDepth = tuple<int, int>;
    vector<ValDepth> leavesValDepth(TreeNode* root, int depth) {
        // null root
        if (!root) {
            return vector<ValDepth> {};
        }
        // is root
        if (root->left == nullptr && root->right == nullptr) {
            return vector<tuple<int, int>> {make_tuple(root->val, depth)};
        }

        auto l = leavesValDepth(root->left, depth + 1);
        auto r = leavesValDepth(root->right, depth + 1);
        l.insert(l.end(), r.begin(), r.end());
        return l;
    }
};