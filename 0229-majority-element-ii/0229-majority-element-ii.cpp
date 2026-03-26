class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int valid = n/3;

        unordered_map <int, int> mp;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto x: mp){
            if(x.second > valid){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};