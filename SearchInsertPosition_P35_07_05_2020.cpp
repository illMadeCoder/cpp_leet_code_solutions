class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                return i;
            }
        }
        return nums.size();
    }
};