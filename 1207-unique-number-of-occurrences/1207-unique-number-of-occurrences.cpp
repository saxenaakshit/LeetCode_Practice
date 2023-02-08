class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> a;
        int i=0;
        while(i<n){
            int count=1;
        for(int j=i+1;j<n;j++ ){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                break;
            }
          
            
        }  a.push_back(count);
            i=i+count;
            }
        sort(a.begin(),a.end());
        int n1=a.size();
       
       for(int j=0;j<n1-1;j++){
           if(a[j]==a[j+1]){
               return false;
           }
       }
        return true;
}
};