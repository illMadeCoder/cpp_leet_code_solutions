class Solution {
private:
    string trim(string str) {
        auto firstNonSpace = str.find_first_not_of(" ");
        auto lastNonSpace = str.find_last_not_of(" ");

        if (firstNonSpace == -1 || lastNonSpace == -1) {
            return "";
        }
        else {
            return str.substr(firstNonSpace, lastNonSpace - firstNonSpace + 1);
        }
    }

    string reverseString(string str) {
        string reverseStr = "";
        for (auto it = str.rbegin(); it != str.rend(); ++it) {
            reverseStr += *it;
        }
        return reverseStr;
    }

    string firstWord(string str) {
        string word = "";
        for (auto it = str.begin(); it != str.end() && *it != ' '; ++it) {
            word += *it;
        }
        return word;
    }
public:
    int lengthOfLastWord(string s) {
        return reverseString(firstWord(reverseString(trim(s)))).length();
    }
};