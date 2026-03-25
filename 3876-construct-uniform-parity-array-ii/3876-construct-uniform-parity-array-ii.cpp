class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallestOdd = INT_MAX;

        int odd;
        int even;

        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i]%2 == 0){
                even++;
            }else{
                odd++;
            }
        }

        if(odd == nums1.size() || even == nums1.size()){
            return true;
        }

        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i]%2 != 0 && nums1[i] < smallestOdd){
                smallestOdd = nums1[i];
            }
        }

        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i]%2 == 0 && (nums1[i] - smallestOdd) < 1){
                return false;
            }
        }

        return true;
    }
};