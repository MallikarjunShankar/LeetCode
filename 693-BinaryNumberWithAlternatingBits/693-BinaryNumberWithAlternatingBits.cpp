// Last updated: 8/23/2026, 3:39:57 PM
class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long x = n ^ (n >> 1);
        return (x & (x + 1)) == 0;
    }
};