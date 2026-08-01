// Last updated: 8/1/2026, 10:09:38 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int tSum = n * (n + 1) / 2;
        
        int aSum = 0;
        for (int num : nums) {
            aSum += num;
        }

        return tSum - aSum;
    }
};