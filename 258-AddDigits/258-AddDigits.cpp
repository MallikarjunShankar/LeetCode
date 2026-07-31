// Last updated: 7/31/2026, 12:59:05 PM
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 9)
            return addDigits(sum);
        return sum;
    }
};