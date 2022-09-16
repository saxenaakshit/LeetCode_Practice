class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int> ans;
        int n = operations.size();
        
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "C"){
                ans.pop_back();
            }else if(operations[i] == "D"){
                ans.emplace_back(2*ans[ans.size()-1]);
            }else if(operations[i] == "+"){
                ans.emplace_back(ans[ans.size()-1] + ans[ans.size()-2]);
            }else{
                int n = stoi(operations[i]);
                ans.emplace_back(n);
            }
        }
        
        int sum = 0;
        
        for(auto it : ans){
            sum+=it;
        }
        
        return sum;
        
    }
};