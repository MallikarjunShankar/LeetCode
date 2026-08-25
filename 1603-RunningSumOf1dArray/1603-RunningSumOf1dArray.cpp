// Last updated: 8/25/2026, 10:41:13 AM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> runningSum;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            runningSum.push_back(sum);
        }
        return runningSum;
    }
};