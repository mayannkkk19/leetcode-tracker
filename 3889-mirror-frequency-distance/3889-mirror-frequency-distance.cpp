class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map <char, int> mp;
        int totalSum = 0;

        for(int i = 48; i <= 57; i++){
            mp[char(i)] = 0;
        }

        for(int i = 97; i <= 122; i++){
            mp[char(i)] = 0;
        }

        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }


        for(auto x: mp){
            if(x.first >= 97 && x.first <= 109){
                totalSum += abs(x.second - mp[(x.first + 25 - 2*(x.first - 97))]);
            }
        }

        for(auto x: mp){
            if(x.first >= 48 && x.first <= 52){
                totalSum += abs(x.second - mp[(x.first + 9 - 2*(x.first - 48))]);
            }
        }

        return totalSum;
    }
};