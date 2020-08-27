class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        //  [ [3, 0, 8, 4], 
        //    [2, 4, 5, 7],
        //    [9, 2, 6, 3],
        //    [0, 3, 1, 0] ]
        //=
        //   [ [8, 4, 8, 7],
        //     [7, 4, 7, 7],
        //     [9, 4, 8, 7],
        //     [3, 3, 3, 3] ]

        // A skyline is the outer contour of the rectangles formed by all buildings when viewed from a distance.

        // skyline

        //  [ [3, 0, h8v|1, 4], 
        //    [2, 4v|2, 5, h7v|3],
        //    [h9v|4, 2, 6, 3],
        //    [0, h3|5, 1, 0] ]

        //   [ [8|1, 4|2, 8|1, 7|3],
        //     [7|3, 4|2, 7|3, 7|3],
        //     [9|4, 4|2, 8|1, 7|3],
        //     [3|5, 3|5, 3|5, 3|5] ]

        // get top to bottom skyline
        auto size = grid.size();
        vector<int> v_skyline(size, 0);
        vector<int> h_skyline(size, 0);
        for (auto i = 0; i < size; i++) {
            for (auto j = 0; j < size; j++) {
                // move down each column and see if there's a max
                v_skyline[j] = max(v_skyline[j], grid[i][j]);
                // get left to right skyline
                h_skyline[i] = max(h_skyline[i], grid[i][j]);
            }
        }

        // max res is cart prod
        auto res = 0;
        for (auto i = 0; i < size; i++) {
            for (auto j = 0; j < size; j++) {
                res += min(v_skyline[j], h_skyline[i]) - grid[i][j];
            }
        }

        // return maximum total sum that the height of the buildings can increase
        return res;
    }
};