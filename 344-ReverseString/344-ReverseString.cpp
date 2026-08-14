// Last updated: 8/14/2026, 10:08:39 PM
class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            char temp;
            temp = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = temp;
        }
    }
};