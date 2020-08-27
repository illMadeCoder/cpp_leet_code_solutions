class Solution {
public:
    int xorOperation(int n, int start) {
        int running = 0;
        for (int i = 0; i < n; i++) {
            running ^= start + 2 * i;
        }
        return running;
    }
};