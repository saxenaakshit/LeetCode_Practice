class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[lo]);
                mid++;
                lo++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
               
            }
            else
                mid++;
        }
    }
};