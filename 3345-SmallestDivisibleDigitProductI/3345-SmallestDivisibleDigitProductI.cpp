// Last updated: 9/15/2026, 3:23:35 PM
class Solution {
public:
    int smallestNumber(int n, int t) {
        int v = 0;
        while (true) {
            int prod = 1;
            int num = n + v;
            for (int i = 0; num > 0; i++) {
                prod *= num % 10;
                num /= 10;
            }
            if (prod % t == 0) return n + v;
            else v++;
        }
    }
};