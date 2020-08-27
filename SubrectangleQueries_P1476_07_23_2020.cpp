class SubrectangleQueries {

public:
    vector<vector<int>> rect;
    vector<vector<int>> updates;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        rect = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        vector<int> update = { row1, col1, row2, col2, newValue };
        updates.push_back(update);
    }

    int getValue(int row, int col) {
        for (int i = (int)updates.size() - 1; i > -1; i--) {
            if (updates[i][0] <= row && updates[i][1] <= col &&
                updates[i][2] >= row && updates[i][3] >= col) {
                return updates[i][4];
            } // end if
        } // end for i
        return rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */