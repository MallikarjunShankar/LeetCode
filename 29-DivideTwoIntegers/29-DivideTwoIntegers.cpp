// Last updated: 9/15/2026, 3:45:20 PM
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long q = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;
            while (a >= temp + temp) {
                temp += temp;
                multiple += multiple;
            }
            a -= temp;
            q += multiple;
        }

        if ((dividend < 0) != (divisor < 0)) q = -q;

        return (int)q;
    }
};