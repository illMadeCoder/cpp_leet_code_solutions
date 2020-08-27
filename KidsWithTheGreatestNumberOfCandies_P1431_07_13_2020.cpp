class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int normal_greatest = 0;
        for (auto i = 0; i < candies.size(); i++) {
            normal_greatest = normal_greatest > candies[i] ? normal_greatest : candies[i];
        }

        vector<bool> ret;
        for (auto i = 0; i < candies.size(); i++) {
            ret.push_back(candies[i] + extraCandies >= normal_greatest);
        }

        return ret;
    }
};