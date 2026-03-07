class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for(int i = 0; i < nums.size(); i++){
            int temp  = nums[i];
            elementSum += temp;
            while(temp > 0){
                digitSum += temp % 10;
                temp /= 10;
            }
        }

        return abs(elementSum - digitSum);
    }
};