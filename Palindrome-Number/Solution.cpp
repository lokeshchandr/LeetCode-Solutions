class Solution {
    public boolean isPalindrome(int n) {
        int dup = n;
        int revno = 0;
        while (n > 0) {
            int ld = n % 10; //to find the last digit
            n = n / 10;
            revno = (revno * 10) + ld;
        }
        if(revno == dup)
        {
            return true;
        }
        else
        return false;
    }
}
