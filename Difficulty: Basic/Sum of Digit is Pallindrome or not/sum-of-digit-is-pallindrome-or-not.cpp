//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0;
        int x=n;
        while(x>0){
            int d=x%10;
            sum=sum+d;
            x=x/10;
        }
        
        
        int m=sum;
        int revNum=0;
        while(m>0){
           int d=m%10;
           revNum=revNum*10 + d;
           m=m/10;
        }
        
        
        if(sum==revNum){
            return 1;
        }else{
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    
cout << "~" << "\n";
}
}

// } Driver Code Ends