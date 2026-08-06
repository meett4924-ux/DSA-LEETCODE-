class Solution {
public:
    int smallestNumber(int n, int t) {
        auto getDigitProduct = [](int num) {
            int prod = 1;
            while (num > 0) {
                prod *= (num % 10);
                num /= 10;
            }
            return prod;
        };

        while (getDigitProduct(n) % t != 0) {
            n++;
        }
        return n;
    }
};