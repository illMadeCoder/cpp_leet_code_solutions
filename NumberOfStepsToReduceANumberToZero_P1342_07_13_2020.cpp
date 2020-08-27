class Solution {
public:
    int numberOfSteps(int num) {
        // even divide by 2
        // odd subtract 1
        // how many steps for num

        // examples
        // 1
        // 1. odd | 0

        // 2
        // 1. even | 1
        // 2. odd | 0

        // 3
        // 1. odd | 2
        // 2. even | 1
        // 3. odd | 0

        // 4
        // 1. even | 2
        // 2. even | 1
        // 3. odd | 0

        // 5
        // 1. odd | 4
        // 4 | 3 = 4

        unsigned char count = 0;
        while (num != 0) {
            if (num % 2 == 0) {
                num /= 2;
            }
            else {
                num -= 1;
            }
            count++;
        }
        return count;
    }
};