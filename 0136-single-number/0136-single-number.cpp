class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            k=nums[i]^k;
        }
        return k;
    }
};