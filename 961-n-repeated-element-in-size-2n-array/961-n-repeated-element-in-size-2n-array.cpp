class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size()/2;
        for(auto it:mp){
            if(it.second==n){
            return it.first;
            }
        }
        return 0;
    }
};