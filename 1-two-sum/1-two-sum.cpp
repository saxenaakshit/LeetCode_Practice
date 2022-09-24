class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans; // took vector type ans to return
        unordered_map<int,int> map; // map to store avlue of nums element and search whether we have targer - nums[i] element present in it
        
        for(int i=0; i<nums.size(); i++)
        {
            // checking whether we have element target-nums[i] present in nums array or not
            if(map.find(target-nums[i]) != map.end())
            {
               //if yes push index of that number as well as current index
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
            }
            // if not then mapping its index and value in map   
            map[nums[i]]=i;
        }
        return ans;
    }
};