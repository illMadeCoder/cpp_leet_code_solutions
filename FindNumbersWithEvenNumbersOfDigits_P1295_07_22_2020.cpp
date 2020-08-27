class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digits = 0;
        int ret = 0;
        for (auto num : nums) {
            auto copy = num;
            while (num) {
                num /= 10;
                digits++;
            }
            if (digits % 2 == 0) {
                ret += 1;
            }
            digits = 0;
        }

        return ret;
    }
};