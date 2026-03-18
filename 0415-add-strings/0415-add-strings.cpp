class Solution {
public:
    string addStrings(string num1, string num2) {
        int c = 0; 
        int sum;
        int n = num1.size();
        int m = num2.size();

        int i = n-1;
        int j  = m-1;

        string res = "";

        while(i >= 0 && j >= 0){
            int d1 = num1[i] - 48;
            int d2 = num2[j] - 48;

            sum = d1 + d2 + c;

            if(sum > 9){
                c = 1;
            }else{
                c = 0;
            }

            res += to_string(sum%10);
            i--;
            j--;
        }

        if(n > m) {
            while( i >= 0){
                int d1 = num1[i] - 48;
                sum = d1 + c;
                if(sum > 9){
                    c = 1;
                }else{
                    c = 0;
                }

                res += to_string(sum%10);
                i--;
            }
        }else{
            while(j >= 0){
                int d1 = num2[j] - 48;
                sum = d1 + c;
                if(sum > 9){
                    c = 1;
                }else{
                    c = 0;
                }

                res += to_string(sum%10);
                j--;
            }
        }

        if(c > 0){
            res += to_string(c);
        }

        int l = 0;
        int r = res.size()-1;

        while(l < r){
            swap(res[l], res[r]);
            l++;
            r--;
        }

        return res;
    }
};