class Solution {
public:
    int numJewelsInStones(string J, string S) {
        auto count = 0;
        for (auto i = 0; i < S.size(); i++) {
            char candidate = S[i];
            for (auto j = 0; j < J.size(); j++) {
                if (candidate == J[j]) {
                    count += 1;
                    break;
                }
            }
        }
        return count;
    }
};