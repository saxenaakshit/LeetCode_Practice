class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int pos=-1;
        int currFuel=0;
        int totalSum=0;
        for(int i=0;i<gas.size();i++){
            int diff=gas[i]-cost[i];
            currFuel+=diff;
            totalSum+=diff;
            if (currFuel<0){
               currFuel=0;
                pos=i;
            }
        }
            if (totalSum>=0)
                return pos+1;
        
        return -1;
        
    }
};