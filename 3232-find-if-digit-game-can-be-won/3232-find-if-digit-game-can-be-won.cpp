class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumAlice = 0;
        int sumBob = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= 0 && nums[i] < 10){
                sumAlice += nums[i];
            }
            if(nums[i] >= 10 && nums[i] < 100){
                sumBob += nums[i];
            }
        }

        if(sumAlice == sumBob){
            return false;
        }

        return true;
    }
};