// Last updated: 8/23/2026, 1:46:24 PM
class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n, term = 0, product = 1; 
        while (x > 0) {
            int digit = x % 10;
            term += digit;
            product *= digit;
            x /= 10;
        }
        term += product;
        if (n % term == 0) return true;
        return false;
    }
};