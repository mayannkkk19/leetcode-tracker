class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mini = INT_MAX;
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize){
                mini = min(mini, capacity[i]);
            }
        }

        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] == mini) {
                return i;
            }
        }
        
        return -1;
    }
};