class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int nRow=matrix.size();
        int nCol=matrix[0].size();
        int startRow=0;
        int startCol=0;
        int endRow=nRow-1;
        int endCol=nCol-1;
        int count=0;
        int total=nRow*nCol;
        vector<int> ans;
        
        while(count<total){
            //starting row
            for(int i=startCol;i<=endCol && count<total;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            
            //ending column
            for(int i=startRow;i<=endRow && count<total;i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            
            //ending row
            for(int i=endCol;i>=startCol && count<total;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            
            //starting col
            
            for(int i=endRow;i>=startRow && count<total;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};