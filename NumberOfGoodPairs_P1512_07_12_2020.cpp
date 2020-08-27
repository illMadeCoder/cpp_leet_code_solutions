class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ret = 0;
        for (auto i = 0; i < nums.size(); i++) {
            for (auto j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    ret += 1;
                }
            }
        }
        return ret;
    }
};