#include <map>
#include <string>

class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> romanCharToInt = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;

        for (std::string::iterator it = s.begin(); it != s.end(); ++it) {
            int cur = romanCharToInt[*it];
            int next = romanCharToInt[*(it + 1)];

            if (cur < next) {
                sum -= cur;
            }
            else {
                sum += cur;
            }
        }

        return sum;
    }
};