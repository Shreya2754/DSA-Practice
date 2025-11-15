class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long long rev = 0;  //To avoid overflow, use long long
        int original = x;
        while(x != 0){
            int lastDigit = x % 10;
            rev = rev*10 + lastDigit;
            x /= 10;
        }
        return original == rev;
    }
};