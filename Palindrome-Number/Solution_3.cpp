class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes.
        // Numbers ending in 0 are not palindromes 
        (except 0 itself).
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        // Only reverse the second half of the number.
        while (x > revertedNumber) {
            revertedNumber = (revertedNumber * 10) + (x 
            % 10);
            x /= 10;
        }

        // For even-length numbers: x == revertedNumber
        // For odd-length numbers: x == 
        revertedNumber / 10 (gets rid of the middle 
        digit)
        return x == revertedNumber || x == 
        revertedNumber / 10;
    }
};

