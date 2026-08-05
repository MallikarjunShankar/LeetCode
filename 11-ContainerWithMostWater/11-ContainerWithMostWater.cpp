// Last updated: 8/5/2026, 9:54:35 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int width = right - left;
            int currHeight = min(height[left], height[right]);
            maxArea = max(maxArea, width * currHeight);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }
};