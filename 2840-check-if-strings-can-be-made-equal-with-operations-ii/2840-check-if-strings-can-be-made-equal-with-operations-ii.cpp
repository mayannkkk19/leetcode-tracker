class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char, pair<int, int>> mp1;
        unordered_map<char, pair<int, int>> mp2;
        int n = s1.size();

        //0 for even, 1 for odd

        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                mp1[s1[i]].first++;
                mp2[s2[i]].first++;
            }else{
                mp1[s1[i]].second++;
                mp2[s2[i]].second++;
            }
        }



        for(int i = 0; i < n; i++){
            if((mp1[s1[i]].first != mp2[s1[i]].first) || (mp1[s1[i]].second != mp2[s1[i]].second) ){
                return false;
            }
        }
        

        return true;
    }
};