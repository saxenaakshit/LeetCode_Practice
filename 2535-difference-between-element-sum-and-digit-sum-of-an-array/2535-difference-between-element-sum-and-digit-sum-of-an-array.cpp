class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0,ds=0;
        for(int i=0;i<nums.size();i++){
           // int t=nums[i];
            es+=nums[i];
            while(nums[i]){
                ds+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
        }
        return abs(ds-es);
    }
};