// Last updated: 8/23/2026, 2:18:30 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return t == s;
    }
};