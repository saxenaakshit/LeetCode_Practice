class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nRow=matrix.size();
        int nCol=matrix[0].size();
        
        int s=0;
        int e=(nRow*nCol)-1;
        int mid=s+(e-s)/2;
        
        while(s<=e){
            int element=matrix[mid/nCol][mid%nCol];
            if(element==target){
                return true;
            }
            if(target>element){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};