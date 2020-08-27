class Solution {
public:
    int majorityElement(vector<int>& nums) {
        const int majority_qualifier = nums.size() / 2;
        unordered_map<int, int> map;
        for (int num : nums) {
            map[num]++;
            if (map[num] > majority_qualifier) {
                return num;
            }
        }
        return 0;
    }
};