class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        long int checker = 0;

        while(y > 0){
            checker = checker*10 + y%10;

            y = y/10;
        }

        if(checker == x){
            return 1;
        }else{
            return 0;
        }
    }
};