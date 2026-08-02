// Last updated: 8/2/2026, 9:52:08 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = 0;
        for (int b = 0; b < nums.size(); b++) {
            if (nums[b] != val) {
                nums[a] = nums[b];
                a++;
            }
        }
        return a;
    }
};