class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string con = "";
        for(int i = 0; i < words.size(); i++){
            con += words[i];
            if(con.size() >= s.size()){
                break;
            }
        }

        if(con != s){
            return false;
        }

        return true;
    }
};