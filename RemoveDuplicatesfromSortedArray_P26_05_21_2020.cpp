class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        if (nums.size() == 1) {
            return 1;
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);
                    j--;
                }
            }
        }

        return nums.size();
    }
};