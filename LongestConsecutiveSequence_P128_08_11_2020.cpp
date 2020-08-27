class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set = unordered_set<int>();

        for (int num : nums) {
            num_set.insert(num);
        }

        auto running = 0;
        auto running_max = 0;
        auto e = num_set.end();
        for (int i = 0; i < nums.size(); i++) {
            if (num_set.find(nums[i] - 1) == e) {
                while (num_set.find(nums[i] + running) != e) {
                    running++;
                }
                running_max = max(running, running_max);
                running = 0;
            }
        }

        return running_max;
    }
};