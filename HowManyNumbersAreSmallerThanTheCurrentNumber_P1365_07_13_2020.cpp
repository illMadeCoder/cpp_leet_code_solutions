class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ret(nums.size());
        auto candidate = 0;
        for (auto i = 0; i < nums.size(); i++) {
            candidate = nums[i];
            for (auto j = 0; j < nums.size(); j++) {
                if (candidate > nums[j]) {
                    ret[i]++;
                }
            }
        }
        return ret;
    }
};