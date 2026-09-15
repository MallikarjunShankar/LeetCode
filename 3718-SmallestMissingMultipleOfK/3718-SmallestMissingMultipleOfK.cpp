// Last updated: 9/15/2026, 3:23:25 PM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int mult = k;
        while (numSet.count(mult))
            mult += k;
        return mult;
    }
};