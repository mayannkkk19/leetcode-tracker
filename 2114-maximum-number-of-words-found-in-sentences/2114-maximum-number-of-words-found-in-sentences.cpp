class Solution {
private: 
    vector<string> vectorOfWords(string s){
        vector<string> words;
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ' || i == s.size()){
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
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = INT_MIN;
        for(int i = 0; i < sentences.size(); i++){
            vector<string> words = vectorOfWords(sentences[i]);
            int n = words.size();
            maxWords = max(maxWords, n);
        }

        return maxWords;
    }
};