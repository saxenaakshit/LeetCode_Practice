#include <bits/stdc++.h>
class Solution {
private:
    void findsum(int ind,int target,vector<int>& candidates,vector<vector<int>> &ans,vector<int> &ds){
        if(candidates.size()==ind){
            if(target==0){
                ans.push_back(ds);
              
            }
              return;
        }
        
        //picking up element
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            findsum(ind,target-candidates[ind],candidates,ans,ds);
            ds.pop_back();
        }
        
        //not picking
        findsum(ind+1,target,candidates,ans,ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findsum(0,target,candidates,ans,ds);
        return ans;
    }
};