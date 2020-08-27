class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret;
        int s = 0;
        for (auto i = 0; i < nums.size(); ++i) {
            s += nums[i];
            ret.push_back(s);
        }
        return ret;
    }
};