class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        
        int i=0;
        int j=0;
        
        int n=nums1.size();
        int m=nums2.size();
        
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            nums3.push_back(nums2[j]);
            j++;
        }
        
        int t = nums3.size();
        if(t % 2) {
            return nums3[t/2];
        }
        return (double)(nums3[t/2] + nums3[t/2 - 1])/(double)2;
    }
};