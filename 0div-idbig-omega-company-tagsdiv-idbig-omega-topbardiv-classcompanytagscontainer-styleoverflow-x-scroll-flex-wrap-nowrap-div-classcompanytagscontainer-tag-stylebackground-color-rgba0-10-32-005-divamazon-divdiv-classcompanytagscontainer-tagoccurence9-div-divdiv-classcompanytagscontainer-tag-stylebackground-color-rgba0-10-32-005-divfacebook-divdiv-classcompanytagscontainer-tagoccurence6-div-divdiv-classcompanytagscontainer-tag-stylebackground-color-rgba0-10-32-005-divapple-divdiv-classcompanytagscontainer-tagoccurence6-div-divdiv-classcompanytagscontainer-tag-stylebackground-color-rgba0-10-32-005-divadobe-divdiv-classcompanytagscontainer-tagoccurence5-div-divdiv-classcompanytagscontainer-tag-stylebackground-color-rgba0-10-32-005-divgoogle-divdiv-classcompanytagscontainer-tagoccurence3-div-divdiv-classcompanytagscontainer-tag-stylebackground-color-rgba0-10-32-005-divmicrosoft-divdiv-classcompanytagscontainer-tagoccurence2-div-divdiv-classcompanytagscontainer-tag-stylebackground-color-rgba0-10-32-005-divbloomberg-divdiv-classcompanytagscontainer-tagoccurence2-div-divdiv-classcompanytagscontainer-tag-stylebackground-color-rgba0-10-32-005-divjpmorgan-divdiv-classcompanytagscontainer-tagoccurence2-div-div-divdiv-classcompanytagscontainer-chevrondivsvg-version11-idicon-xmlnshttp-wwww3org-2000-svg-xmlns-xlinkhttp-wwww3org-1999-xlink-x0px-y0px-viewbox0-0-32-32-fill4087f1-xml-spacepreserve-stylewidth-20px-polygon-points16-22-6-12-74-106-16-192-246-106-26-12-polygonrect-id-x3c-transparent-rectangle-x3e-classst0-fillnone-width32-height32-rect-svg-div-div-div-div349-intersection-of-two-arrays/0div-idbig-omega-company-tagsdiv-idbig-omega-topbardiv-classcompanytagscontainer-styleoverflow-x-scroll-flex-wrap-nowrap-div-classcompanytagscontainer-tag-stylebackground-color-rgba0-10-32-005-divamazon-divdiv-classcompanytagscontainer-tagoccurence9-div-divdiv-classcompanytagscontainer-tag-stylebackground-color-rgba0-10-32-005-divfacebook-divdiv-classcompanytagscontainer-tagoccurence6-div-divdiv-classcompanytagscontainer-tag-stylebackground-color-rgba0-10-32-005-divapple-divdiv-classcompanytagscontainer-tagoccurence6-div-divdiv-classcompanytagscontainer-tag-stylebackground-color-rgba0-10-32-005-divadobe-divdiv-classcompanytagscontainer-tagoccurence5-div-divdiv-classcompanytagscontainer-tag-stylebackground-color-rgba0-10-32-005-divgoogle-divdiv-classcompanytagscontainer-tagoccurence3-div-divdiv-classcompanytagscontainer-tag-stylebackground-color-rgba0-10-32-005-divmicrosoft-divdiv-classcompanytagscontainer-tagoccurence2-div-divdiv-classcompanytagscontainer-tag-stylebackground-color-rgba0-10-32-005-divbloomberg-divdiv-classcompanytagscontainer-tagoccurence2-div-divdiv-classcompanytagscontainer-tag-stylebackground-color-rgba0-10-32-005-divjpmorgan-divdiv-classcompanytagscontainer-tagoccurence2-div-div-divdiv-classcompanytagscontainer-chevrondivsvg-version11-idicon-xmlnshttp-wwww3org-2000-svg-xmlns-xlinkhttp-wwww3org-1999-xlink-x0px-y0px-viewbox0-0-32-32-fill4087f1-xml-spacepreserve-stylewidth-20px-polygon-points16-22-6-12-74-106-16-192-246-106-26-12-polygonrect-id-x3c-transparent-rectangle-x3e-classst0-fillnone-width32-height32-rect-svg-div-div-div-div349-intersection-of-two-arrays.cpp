#include <bits/stdc++.h>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1,mp2;
        set<int> arr1;
        vector<int> arr2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            mp2[nums2[j]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(mp1[nums1[i]] && mp2[nums1[i]]){
            arr1.insert(nums1[i]);
            nums1[i]=0;
            }
        }
        for(auto a:arr1){
            arr2.push_back(a);
        }
        return arr2;
        
    }
};