class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ret;
        for (auto i = 0; i < index.size(); i++) {
            ret.insert(ret.begin() + index[i], nums[i]);
        }
        return ret;
    }
};