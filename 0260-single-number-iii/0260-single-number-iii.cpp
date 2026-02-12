class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map <int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<int> result;

        for(auto x: mp){
            if(x.second == 1){
                result.push_back(x.first);
                x.second = 3;
            }
        }

        return result;
    }
};