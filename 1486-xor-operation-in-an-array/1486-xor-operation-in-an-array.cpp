class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector <int> v(n);
        int i=0;
        for(int i=0;i<n;i++){
            v[i]=start+2*i;
        }
        int xoro=0;
        for(int i=0;i<n;i++){
            xoro=xoro^v[i];
        }
        return xoro;
    }
};