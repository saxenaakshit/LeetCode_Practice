class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int f=0;
        int l=n-1;
        int i=0;
        while(i<=l){
            if(nums[i]==2){
                swap(nums[i],nums[l]);
                l--;
            }
            else if(nums[i]==0){
                swap(nums[i],nums[f]);
                f++;
                i++;
            }
            else if(nums[i]==1)
                i++;
        }
        
    }
};