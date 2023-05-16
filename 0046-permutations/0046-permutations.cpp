class Solution {
    private:
    void solve(vector <int> &nums,vector<vector<int>> &ans,int index){
        if(nums.size()<=index){
            ans.push_back(nums);
            return;
        }
        
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            //backtracking
            swap(nums[index],nums[j]);
        }
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
        vector <vector<int>> ans;
        solve(nums,ans,index);
        return ans;
    }
};