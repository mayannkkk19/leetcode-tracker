class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, vector<int>> mp;

        for(int i = 0; i < s.length(); i++){
            mp[s[i]].push_back(i);
        }

        for(auto x: s){
            if(mp[x].size() == 1){
                return mp[x][0];
            }
        }
        return -1;
    }
};