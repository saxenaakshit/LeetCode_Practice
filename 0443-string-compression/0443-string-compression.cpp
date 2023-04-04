class Solution {
public:
    int compress(vector<char>& chars) {
       int i=0;
        int ansInd=0;
        int n=chars.size();
        
        while(i<n)
        {
            
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            
            //storing old character
            chars[ansInd++]=chars[i];
            
            int count=j-i;
            if(count >1){
                //convert count into char and saving
                string cnt=to_string(count);
                for(char ch:cnt){
                    chars[ansInd++]=ch;
                }
            }
            i=j;
        }
        return ansInd;
    }
    
};