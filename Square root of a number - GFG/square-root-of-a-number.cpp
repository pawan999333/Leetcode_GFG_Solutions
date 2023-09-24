//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
  
  
  long long int squareRoot(long long int x){
      int s=0;
        int e=x;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        
        while(s<=e){
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
  }
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        return squareRoot(x);
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends