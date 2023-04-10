class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        //transposing the matrix
        for(int i=0;i<row;i++){
            for(int j=i+1;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //we get after transposing for example 1
        
        //1 4 7
        //2 5 8
        //3 6 9
        
        //reversing elements of each row
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        //after that we get the final output shown in example 1
    }
};