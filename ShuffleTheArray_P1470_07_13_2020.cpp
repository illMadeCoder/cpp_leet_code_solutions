class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> l;
        vector<int> r;
        for (auto i = 0; i < nums.size(); i++) {
            if (i < n) {
                l.push_back(nums[i]);
            }
            else {
                r.push_back(nums[i]);
            }
        }
        vector<int> ret;
        for (auto i = 0; i < l.size(); i++) {
            ret.push_back(l[i]);
            ret.push_back(r[i]);
        }
        return ret;
    }
};