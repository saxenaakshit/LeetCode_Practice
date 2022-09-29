class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int>v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=nums[i];
            v.push_back(count);
        }
        return v;
    }
};