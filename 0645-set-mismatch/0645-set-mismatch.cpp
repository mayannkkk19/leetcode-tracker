class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[i+1] = 0;
        }

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second == 2){
                res.push_back(x.first);
            }
        }
        for(auto x: mp){
            if(x.second == 0){
                res.push_back(x.first);
            }
        }
        return res;
    }
};