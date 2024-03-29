//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int y=A[i];
            int sum=X-y;
            int high=n-1;
            int low=i+1;
            while(low<high){
                if(A[low]+A[high]==sum)
                return 1;
                else if(A[low]+A[high]<sum)
                low++;
                else
                high--;
            }
        }
        return 0;
        //Your Code Here
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends