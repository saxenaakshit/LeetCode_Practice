class Solution {
public:
    string toLowerCase(string s) {
        int n=s.length();
        string s1="";
        for(int i=0;i<n;i++){
            char c=s[i];
            
            char ch=tolower(c);
            s1+=ch;
        }
            return s1;
    }
};