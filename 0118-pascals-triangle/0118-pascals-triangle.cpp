class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        for(int i=1;i<=numRows;i++){
            vector<int> temp;
            for(int j=0;j<i;j++){
                if(j==0||j==i-1){
                    temp.push_back(1);                }
            
            else{
                temp.push_back(result[i-2][j]+result[i-2][j-1]);
            }
        }
            result.push_back(temp);
    }
        return result;
    }
};