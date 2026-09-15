// Last updated: 9/15/2026, 3:23:55 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (int i = 0; i < letters.size(); i++) {
            if ((int)letters[i] > (int)target) return letters[i];
        }
        return letters[0];
    }
};