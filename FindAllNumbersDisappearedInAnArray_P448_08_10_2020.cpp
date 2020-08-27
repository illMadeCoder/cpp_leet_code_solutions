class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> nums_check = vector<bool>(nums.size());
        for (auto i = 0; i < nums.size(); i++) {
            nums_check[nums[i] - 1] = true;
        }
        vector<int> ret = vector<int>();
        for (auto i = 0; i < nums_check.size(); i++) {
            if (!nums_check[i]) {
                ret.push_back(i + 1);
            }
        }
        return ret;
    }
};