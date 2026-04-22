class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        unordered_map <int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                mp[nums[i]].push_back(i);
            }
        }

        if(mp.size() == 0){
            return true;
        }

        for(int i = 0; i < mp[1].size()-1; i++){
            if(mp[1][i+1] - mp[1][i] < k+1){
                return false;
            }
        }

        return true;
    }
};