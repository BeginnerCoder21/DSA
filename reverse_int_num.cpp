/*
Input: x = 123
Output: 321

Input: x = -123
Output: -321
*/
int reverse(int x) {
        long long rev = 0; // Use long long to handle potential overflow
        while (x) {
            int rem = x % 10;
            x = x / 10;

            // Check for overflow before updating rev
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) {
                return 0; // Overflow occurred, return 0
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8)) {
                return 0; // Overflow occurred, return 0
            }

            rev = (rev * 10) + rem;
        }
        return int(rev);
    }