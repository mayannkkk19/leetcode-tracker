class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res;
        
        int size = nums.size();
        int till = k % size;

        for(int i = size - till; i < nums.size(); i++){
            res.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size() - till; i++){
            res.push_back(nums[i]);
        }

        for(int i = 0; i < res.size(); i++){
            nums[i] = res[i];
        }
    }
};