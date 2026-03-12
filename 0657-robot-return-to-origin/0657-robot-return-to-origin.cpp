class Solution {
public:
    bool judgeCircle(string moves) {
        int countL = 0;
        int countR = 0;
        int countU = 0;
        int countD = 0;
        for(auto x: moves){
            if(x == 'L'){
                countL++;
            }
            if(x == 'R'){
                countR++;
            }
            if(x == 'U'){
                countU++;
            }
            if(x == 'D'){
                countD++;
            }
        }

        if(countL != countR || countU != countD){
            return false;
        }
        
        return true;
    }
};