// Last updated: 7/29/2026, 6:45:51 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        int num = x;

        while(num != 0) {
            int rem = num % 10;
            reversed = reversed * 10 + rem;
            num /= 10;
        }
        return (reversed == x);
    }
};