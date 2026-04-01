class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map <char, char> maps;
        unordered_map <char, char> mapz;
        bool ans = true;

        for(int i = 0; i < s.size(); i++){
            if(maps.find(s[i]) != maps.end() && maps[s[i]] != t[i]){
                ans = false;
            }
            maps[s[i]] = t[i];
        }
        for(int i = 0; i < s.size(); i++){
            if(mapz.find(t[i]) != mapz.end() && mapz[t[i]] != s[i]){
                ans = false;
            }
            mapz[t[i]] = s[i];
        }

        return ans;
    }
};