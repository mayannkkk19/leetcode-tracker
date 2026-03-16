class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000){
            return 0;
        }
        
        if(n >= pow(10,3) && n < pow(10, 6)){
            return (n - 1000) + 1;
        }

        if(n >= pow(10, 6) && n < pow(10, 9)){
            return ((n - pow(10, 6))*2 + 1  + (pow(10, 6) - 1000 + 1));
        }

        if(n >= pow(10, 9) && n < pow(10, 12)){
            return ((n - pow(10, 9))*3 + 1 + (pow(10, 9)*2 - pow(10, 6)*2 + 1) + (pow(10, 6) - 1000 + 1));
        }

        if(n >= pow(10, 12) && n < pow(10, 15)){
            return ((n - pow(10, 12))*4 + 1 + (pow(10, 12)*3 - pow(10, 9)*3 + 1) + (pow(10, 9)*2 - pow(10, 6)*2 + 1) + (pow(10, 6) - 1000 + 1));
        }
        
        return ((n - pow(10, 12))*4 + 1 + (pow(10, 12)*3 - pow(10, 9)*3 + 1) + (pow(10, 9)*2 - pow(10, 6)*2 + 1) + (pow(10, 6) - 1000 + 1)) + 1;
    }
};