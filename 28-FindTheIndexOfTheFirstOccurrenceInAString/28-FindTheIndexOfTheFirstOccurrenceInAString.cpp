// Last updated: 7/30/2026, 11:14:24 AM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = size(haystack), n = size(needle);

        for (int i = 0; i <= h - n; i++) {
            string sub = haystack.substr(i, n);
            if (sub == needle) {
                return i;
            }
        }
        return -1;
    }
};