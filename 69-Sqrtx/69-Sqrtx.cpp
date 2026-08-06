// Last updated: 8/7/2026, 12:27:12 AM
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int left = 1, right = x / 2;
        int ans = 0;

        while (left <= right) {
            int middle = (left + right) / 2;

            if ((long long)middle * middle <= x) {
                ans = middle;
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
        return ans;
    }
};