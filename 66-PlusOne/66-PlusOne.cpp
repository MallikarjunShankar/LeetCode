// Last updated: 8/14/2026, 2:02:01 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        int carry = 1;

        for (int i = n; i >= 0; i--) {
            digits[i] += carry;

            if (digits[i] > 9) {
                digits[i] = 0;
                carry = 1;
            } else {
                carry = 0;
                break;
            }
        }

        if (carry == 1) digits.insert(digits.begin(), 1);

        return digits;
    }
};