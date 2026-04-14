class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        int sum;
        for(int i = 1; i <= num; i++){
            sum = 0;
            int test = i;
            while(test > 0){
                sum = sum + test%10;

                test /= 10;
            }

            if(sum%2 == 0){
                ans++;
            }
        }

        return ans;
    }
};