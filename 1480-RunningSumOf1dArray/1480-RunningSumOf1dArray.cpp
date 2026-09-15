// Last updated: 9/15/2026, 3:23:37 PM
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