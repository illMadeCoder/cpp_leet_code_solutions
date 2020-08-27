class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty() || strs[0] == "") {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }

        string pivot = strs[0];
        string prefix = "";

        for (int i = 0; i < pivot.length(); i++) {
            char nextChar = pivot[i];
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][prefix.length()] != nextChar) {
                    return prefix;
                }
            }
            prefix += nextChar;
        }
        return prefix;
    }
};