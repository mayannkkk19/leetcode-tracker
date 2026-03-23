class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0;
        for(int i = 0; i < gas.size(); i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }
        if(totalGas < totalCost){
            return -1;
        }

        int tank;
        int idx;
        int j = 0;
        int count = 0;
        tank = 0;

        while(1){
            if(tank + gas[j] >= cost[j]){
                tank = tank + gas[j] - cost[j];
                count++;
                j = (j + 1)%gas.size();
                if(count == gas.size()){
                    return j;
                }
            }else{
                tank = 0;
                count = 0;
                j = (j+1)%gas.size();
                idx = j;
            }
        }

        return idx;
    }
};