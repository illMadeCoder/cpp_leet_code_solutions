class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ret;
        for (auto i = 0; i < nums.size(); i += 2) {
            auto freq = nums[i];
            auto val = nums[i + 1];
            vector<int> v(freq, val);
            ret.insert(ret.end(), v.begin(), v.end());
        }
        return ret;
    }
};