// Last updated: 8/1/2026, 9:24:38 PM
class Solution {
public:
     int solve(vector<int>& nums, int l, int r, vector<vector<int>>& dp) {
        if (l == r)
            return nums[l];
        if (dp[l][r] != -1)
            return dp[l][r];

        int left = nums[l] - solve(nums, l + 1, r, dp);
        int right = nums[r] - solve(nums, l, r - 1, dp);

        return dp[l][r] = max(left, right);
    }


    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(nums, 0, n - 1, dp) >= 0;
    }
};