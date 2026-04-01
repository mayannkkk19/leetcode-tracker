class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map <char, char> maps;
        unordered_map <char, char> mapz;
        bool ans = true;

        for(int i = 0; i < s.size(); i++){
            if(maps.find(s[i]) != maps.end() && maps[s[i]] != t[i]){
                return false;
            }
            maps[s[i]] = t[i];

            if(mapz.find(t[i]) != mapz.end() && mapz[t[i]] != s[i]){
                return false;
            }
            mapz[t[i]] = s[i];
        }

        return true;
    }
};