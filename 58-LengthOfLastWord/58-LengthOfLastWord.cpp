// Last updated: 8/2/2026, 10:34:44 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size() - 1;
        while (n + 1 > 0 && s[n] == ' ') {
            n--;
        }
        int count = 0;
        while (n + 1 > 0 && s[n] != ' ') {
            count++;
            n--;
        }
        return count;
    }
};