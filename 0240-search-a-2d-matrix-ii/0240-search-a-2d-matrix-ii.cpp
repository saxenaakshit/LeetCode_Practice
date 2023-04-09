class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        //indexis..
        int rowIndx=0;
        int colIndx=col-1;

        while(rowIndx < row and colIndx >= 0){
             int element=matrix[rowIndx][colIndx];
             if(element==target)
             return true;
             else if(element < target)
               rowIndx++;
               else
               colIndx--;
        }
        return false;
    }
};