class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map <char, int> mp;
        int n = word1.size(); // word1.size() == word2.size()
        for(int i = 0; i < n; i++){
            mp[word1[i]]++;
        }
        for(int i = 0; i < n; i++){
            mp[word2[i]]--;
        }

        for(auto x: mp){
            if(abs(x.second) > 3){
                return false;
            }
        }

        return true;
    }
};