class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ret = vector<int>(m + n, 0);
        int i1 = 0;
        int i2 = 0;
        for (int i = 0; i < n + m; i++) {
            if (i1 < m && i2 < n) {
                if (nums1[i1] < nums2[i2]) {
                    ret[i] = nums1[i1];
                    i1++;
                }
                else {
                    ret[i] = nums2[i2];
                    i2++;
                }
            }
            else if (i1 < m) {
                ret[i] = nums1[i1];
                i1++;
            }
            else {
                ret[i] = nums2[i2];
                i2++;
            }

        }
        for (int i = 0; i < n + m; i++) {
            nums1[i] = ret[i];
        }
    }
};