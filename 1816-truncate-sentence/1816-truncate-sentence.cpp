class Solution {
public:
    string truncateSentence(string s, int k) {
        string temp="";
    int count=0;
        int i=0;
        for(;i<s.length();i++){
           if(s[i]==' ')
               count++;
            if(count==k)
                break;
            
            temp+=s[i];
            
            
        }
        return temp;
    }
};