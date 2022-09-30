class Solution {
public:
    int maximumWealth(vector<vector<int>>& s) {
        int n=s.size();
        int m=s[0].size();
        int max1=0;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                count+=s[i][j];
            }
            max1=max(count,max1);
            count=0;
        }
        return max1;
    }
};