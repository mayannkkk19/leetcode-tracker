class Solution {

private: 
    int getMin (int i, int j, int k){
        return (abs(i-j) + abs(j-k) + abs(k-i));
    }

public:
    int minimumDistance(vector<int>& nums) {
        unordered_map <int, int> freq;
        unordered_map <int, vector<int>> idxs;
        for(auto x: nums){
            freq[x]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(freq[nums[i]] >= 3){
                idxs[nums[i]].push_back(i);
            }
        }

        int mini = INT_MAX;

        for(auto x: idxs){
            for(int i = 0; i < x.second.size()-2; i++){
                int temp = getMin(x.second[i], x.second[i+1], x.second[i+2]);
                mini = min(mini, temp);
            }
        }

        if(mini == INT_MAX){
            return -1;
        }

        return mini;
    }
};