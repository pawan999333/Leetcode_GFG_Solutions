//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        
        vector<int>ans(1,1);
        while(n>1){
        int carry=0,res,size=ans.size();
    
        for(int i=0;i<size;i++){
            res=n*ans[i]+carry;
            ans[i]=res%10;
            carry=res/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry=carry/10;
        }
        n--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
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
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends