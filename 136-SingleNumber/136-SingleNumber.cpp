// Last updated: 8/1/2026, 10:25:09 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for (int num : nums) {
            a ^= num;
        }
        return a;
    }
};