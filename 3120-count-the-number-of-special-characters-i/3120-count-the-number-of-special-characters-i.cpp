class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map <char, int> mp1;
        unordered_map <char, int> mp;
        sort(word.begin(), word.end());
        string s = "";

        for(int i = 0; i < word.size(); i++){
            mp1[word[i]]++;
        }

        for(auto x: mp1){
            s += x.first;
        }

        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == s[i+1]){
                s.erase(i, 1);
            }
        }


        for(int i = 0; i < s.size(); i++){
            mp[tolower(s[i])]++;
        }
        int count = 0;
        for(auto x: mp){
            if(x.second == 2){
                count++;
            }
        }

        return count;
    }
};