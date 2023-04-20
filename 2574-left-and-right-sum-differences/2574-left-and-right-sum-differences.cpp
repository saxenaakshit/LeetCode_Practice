class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        int n=nums.size();
            vector<int> left;
            vector<int> right;
        
        left.push_back(0);
        right.push_back(0);
        
         int sum1=0;
        for(int i=0;i<n-1;i++){
           
            sum1+=nums[i];
            left.push_back(sum1);
        }
        int sum2=0;
        for(int j=n-1;j>=1;j--){
            sum2+=nums[j];
            right.push_back(sum2);
        }
        reverse(right.begin(),right.end());
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            int sum=0;
            sum=abs(left[i]-right[i]);
            ans.push_back(sum);
        }
        
        return ans;
            
        
        
    }
};