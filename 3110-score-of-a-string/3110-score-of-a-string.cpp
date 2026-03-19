class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int i = 0;
        int j = i+1;
        while(j < s.size()){
            sum += abs(s[i]-s[j]);
            i++;
            j++;
        }
        return sum;
    }
};