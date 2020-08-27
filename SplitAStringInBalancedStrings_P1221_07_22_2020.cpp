class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0;
        int r = 0;
        int ret = 0;
        for (auto i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                l++;
            }
            else {
                r++;
            }
            if (l == r) {
                ret++;
                l = 0;
                r = 0;
            }
        }
        return ret;
    }
};