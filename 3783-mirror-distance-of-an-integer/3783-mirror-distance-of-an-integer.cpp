class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int c = n;

        while(n > 0){
            rev = rev*10 + n%10;
            n /= 10;
        }

        return abs(c - rev);
    }
};