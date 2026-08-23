// Last updated: 8/23/2026, 3:57:01 PM
class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            if ((int)s[i] <= 90) s[i] = tolower(s[i]);
        }
        return s;
    }
};