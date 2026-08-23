// Last updated: 8/23/2026, 2:44:20 PM
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long left = 1, right = n, mid = (right + left) / 2; 
        while (left < right) {
            int res = guess(mid);
            if (res == 0) break;
            else if (res == 1) {
                left = mid + 1;
                mid = (left + right) / 2;
            } else if (res == -1) {
                right = mid - 1;
                mid = (left + right) / 2;
            }
        }
        return mid;
    }
};