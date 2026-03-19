class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char st[100] = {'\0'};
        for(int i = 0;  i < indices.size(); i++){
            st[indices[i]] = s[i];
        }

        string res = "";

        for(int i = 0; i < indices.size(); i++){
            res+=st[i];
        }

        return res;
    }
};