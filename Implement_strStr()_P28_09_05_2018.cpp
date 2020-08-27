class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        if (haystack.empty()) {
            return -1;
        }

        for (int i = 0; i < haystack.length(); i++) {
            //breaks if needle is no longer findable due to size
            if (i + needle.length() > haystack.length()) {
                return -1;
            }
            for (int j = 0; j <= needle.length(); j++) {
                if (j == needle.length()) {
                    return i;
                }
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
        }

        return -1;
    }
};