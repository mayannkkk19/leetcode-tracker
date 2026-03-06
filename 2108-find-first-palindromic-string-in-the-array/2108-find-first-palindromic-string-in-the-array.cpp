class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            int l = 0;
            int r = words[i].size()-1;

            if(words[i].size() == 1){
                return words[i];
            }

            while(l < r){
                if(words[i][l] == words[i][r]){
                    l++;
                    r--;
                    if(l > r || l == r){
                        return words[i];
                    }
                }else{
                    break;
                }
            }
        }
        return "";
    }
};