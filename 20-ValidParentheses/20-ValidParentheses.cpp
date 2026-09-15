// Last updated: 9/15/2026, 3:24:45 PM
class Solution {
public:
    bool isValid(string s) {
        string st;
        for (char c : s) {
            if (c == '(') st += ')';
            else if (c == '{') st += '}';
            else if (c == '[') st += ']';
            else if (st.empty() || st.back() != c) return false;
            else st.pop_back();
        }
        return st.empty();
    }
};