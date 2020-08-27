class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int max = 0;
        for (int start = 0; start < s.length(); start++) {
            string candidate = "";
            for (int end = 1; end < s.length() - start + 1; end++) {
                candidate = s.substr(start, end);
                //Member's local size is determined either but hitting a redundant character or the end of the string            
                //std::cout << start << "/" << end << " : " << candidate << "\n";
                char nextChar = s[start + end];
                if (candidate.find(nextChar) != string::npos) {
                    break;
                }
            }
            max = candidate.length() > max ? candidate.length() : max;
        }

        return max;
    }
};