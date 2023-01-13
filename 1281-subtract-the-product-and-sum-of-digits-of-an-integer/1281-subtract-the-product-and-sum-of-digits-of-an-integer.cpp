class Solution {
    private:
    int mul1(vector <int> &v){
        int n=v.size();
        int m=1;
        for(int i=0;i<n;i++){
            m=m*v[i];
        }
        return m;
    }
    int add1(vector <int> &v){
        int n=v.size();
        int a=0;
        
        for(int i=0;i<n;i++){
            a=a+v[i];
        }
        return a;
    }
public:
    int subtractProductAndSum(int n) {
        vector<int> v;
        while(n>0){
            int l=n%10;
            v.push_back(l);
            n=n/10;
        }
        int add=add1(v);
        int mul=mul1(v);
        int result=mul-add;
        return result;
    }
    
};