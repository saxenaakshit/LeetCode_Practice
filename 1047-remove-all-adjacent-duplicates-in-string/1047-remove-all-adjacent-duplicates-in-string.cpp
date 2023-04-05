class Solution {
public:
    string removeDuplicates(string s) {
        string temp;
        for(int i=0;i<s.length();i++){
            temp.push_back(s[i]);
            if(temp.length()>=2 && (temp[temp.length()-1]==temp[temp.length()-2])){
                temp.pop_back();
                temp.pop_back();
            }
        }
        return temp;
    }
};