//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    if(A==0){
	        return B;
	    }
	    if(B==0){
	        return A;
	    }
	    
	    while(A!=B){
	        if(A>B){
	            A=A-B;
	        }
	        else if(B>A){
	            B=B-A;
	        }
	    }
	    return B;
	      
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends