// Last updated: 8/2/2026, 10:34:42 PM
class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            result += char((sum % 2) + '0');
            carry = sum / 2;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};