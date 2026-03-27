class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int bars = 0, i = 0;

        for(int i = 0; i < costs.size(); i++){
            if(coins >= costs[i]){
                bars++;
                coins -= costs[i];
            }else{
                break;
            }
        }

        return bars;
    }
};