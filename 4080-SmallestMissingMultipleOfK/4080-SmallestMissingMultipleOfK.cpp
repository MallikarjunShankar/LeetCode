// Last updated: 8/27/2026, 10:31:19 AM
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