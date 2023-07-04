class Solution {
    public String removeOuterParentheses(String s) {
        int open = 0;
        int close = 0;
        int idx1 = 0;
        int idx2 = 0;
        String ans = "";
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == '(') open++;
            else close++;
            if(open == close) {
                idx2 = i;
                ans += s.substring(idx1 + 1,idx2);
                idx1 = i + 1;
                idx2 = i + 1;
            }
        }
        return ans;
        
    }
}