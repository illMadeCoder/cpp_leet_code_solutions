class Solution {
public:
    int subtractProductAndSum(int n) {
        if (n == 0) {
            return 0;
        }
        int digit = 0;
        int product = 1;
        int sum = 0;
        while (n) {
            digit = n % 10;
            n = n / 10;
            sum += digit;
            product *= digit;
        }
        return product - sum;
    }
};