// Last updated: 8/7/2026, 1:14:13 AM
class Solution {
public:
    int nextNumber(int n) {
        int next = 0;
        while (n > 0) {
            int digit = n % 10;
            next += digit * digit;
            n /= 10;
        }
        return next;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = nextNumber(slow);
            fast = nextNumber(nextNumber(fast));
        } while (slow != fast);

        return slow == 1;
    }
};