class Solution {
public:
    int reverse(int x) {
        bool sign  = false;
        if( x < 0 ) {sign = true ; x = abs(x);}
        int ans = 0 ;
        
        while( x > 0 )
        {   
            if(ans > INT_MAX/10) return 0 ; 
            ans = ans*10 + (x%10) ;
            x/=10 ;
        }
        if(sign) ans = -1*ans ;
        return ans ;
    }
};