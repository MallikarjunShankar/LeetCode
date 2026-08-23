// Last updated: 8/23/2026, 1:56:56 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0, i;
        for (i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i+1]) count++;
            else count = 0;
            if (count >= n / 2) return nums[i];
        }
        return nums[i];
    }
};