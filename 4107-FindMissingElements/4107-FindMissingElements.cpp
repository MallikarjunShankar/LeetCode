// Last updated: 8/4/2026, 12:36:53 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[i-1] > 1) {
                for (int j = nums[i-1] + 1; j < nums[i]; j++) {
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};