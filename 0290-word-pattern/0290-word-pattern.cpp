class Solution {
private: 
    vector<string> vectorOfWords(string s){
        vector<string> words;
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(temp != ""){
                    words.push_back(temp);
                    temp.clear();
                }
            }else{
                temp += s[i];
            }
        }
        words.push_back(temp);
        return words;
    }
public:
    bool wordPattern(string pattern, string s) {
        //tokenising the given sentence string first
        vector<string> words = vectorOfWords(s);
        
        unordered_map <char, string> mp1;
        unordered_map <string, char> mp2;

        if(words.size() != pattern.size()){
            return false;
        } 

        for(int i = 0; i < words.size(); i++){
            if(mp1.find(pattern[i]) != mp1.end() && mp1[pattern[i]] != words[i]){
                return false;
            }
            else if(mp2.find(words[i]) != mp2.end() && mp2[words[i]] != pattern[i]){
                return false;
            }
            mp1[pattern[i]] = words[i];
            mp2[words[i]] = pattern[i];
        }

        return true;
    }
};