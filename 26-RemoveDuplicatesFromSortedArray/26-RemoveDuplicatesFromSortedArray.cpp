// Last updated: 7/29/2026, 7:21:26 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 0;
        for (int b = 1; b < nums.size(); b++){
            if (nums[b] != nums[a]) {
                a++;
                nums[a] = nums[b];
            }
        }
        return a + 1;
    }
};