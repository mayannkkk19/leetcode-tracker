class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        unordered_map <char, int> mp;
        for(int i = 0; i < 4; i++){
            mp[s1[i]]++;
            mp[s2[i]]--;
        }

        for(auto x: mp){
            if(x.second != 0){
                return false;
            }
        }

        if(s1 == s2){
            return true;
        }

        if((s1[2] == s2[0]) && (s1[0] == s2[2]) || (s1[3] == s2[1]) && (s1[1] == s2[3])){
            return true;
        }

        return false;
    }
};