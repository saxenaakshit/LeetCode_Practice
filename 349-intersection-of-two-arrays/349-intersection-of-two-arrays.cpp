class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0;int j=0;
        set <int> s;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else 
                j++;
        }
        vector<int> v;
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};