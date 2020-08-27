class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        int max = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            int running = 0;
            for (int j = 0; i + j < nums.size(); j++) {
                running += nums[i + j];
                max = running > max ? running : max;
            }
        }
        return max;
    }
};