class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> ans(2*n);
        int n1=nums.size();
        int i=0;
        int j=0;
        while(i<n1&&j<n){
            ans[i]=nums[j];
            i+=2;
            j++;
        }
         i=1;
         j=n;
        
        while(i<n1 && j<n1){
            ans[i]=nums[j];
            i+=2;
            j++;
        }
        return ans;
    }
};