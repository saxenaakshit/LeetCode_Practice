class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int rowInd=0;
        int colInd=col-1;
        
        while(rowInd<row && colInd>=0){
            
            int element=matrix[rowInd][colInd];
            if(element==target){
                return 1;
            }
            else if(element<target){
                rowInd++;
            }
            else{
                colInd--;
            }
        }
        return 0;
    }
};