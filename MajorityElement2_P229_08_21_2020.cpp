class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        const int majority_qualifier = nums.size() / 3;
        unordered_map<int, int> map;
        vector<int> ret;
        for (int num : nums) {
            map[num]++;
        }

        for (auto pair : map) {
            if (pair.second > majority_qualifier) {
                ret.push_back(pair.first);
            }
        }
        return ret;
    }
};