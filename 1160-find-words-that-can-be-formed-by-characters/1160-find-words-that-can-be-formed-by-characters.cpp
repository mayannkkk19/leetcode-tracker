class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map <char, int> ch;
        int count = 0;
        for(auto x: chars){
            ch[x]++;
        }

        for(int i = 0; i < words.size(); i++){
            bool check = true;
            unordered_map <char, int> st = ch;
            for(int j = 0; j < words[i].length(); j++){
                st[words[i][j]]--;
            }

            for(auto x: st){
                if(x.second < 0){
                    check = false;
                }
            }

            if(check){
                count += words[i].length();
            }
            
        }

        return count;
    }
};