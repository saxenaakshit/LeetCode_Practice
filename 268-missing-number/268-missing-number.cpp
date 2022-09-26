class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count=0;int count1=0;
        for(int i=0;i<=nums.size();i++){
            count+=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            count1+=nums[i];
        }
        return count-count1;
    }
};