class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;

        unordered_map <int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[i+1] = 0;
        }

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto x: mp){
            if(x.second == 0){
                missing.push_back(x.first);
            }
        }

        
        return missing;
    }
};