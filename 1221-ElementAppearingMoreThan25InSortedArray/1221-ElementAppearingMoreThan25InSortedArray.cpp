// Last updated: 8/25/2026, 10:33:04 AM
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (count >= n / 4) return arr[i];
            if (arr[i] == arr[i + 1]) count++;
            else count = 0;
        }
        return arr[n];
    }
};