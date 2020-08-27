#include <alorithm>
#include <vector>
#include <iostream>
#include <math.h>

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());

        double sol = 0;
        size_t size = nums1.size();
        if (size == 0) {
            return sol;
        }
        else if (size % 2 == 0) {
            return (double)(nums1[size / 2] + nums1[size / 2 - 1]) / 2;
        }
        else {
            return (double)nums1[std::floor(size / 2)];
        }

        return sol;
    }
};