//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
        int n=arr.size();
        int candidate=0,count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                candidate=arr[i];
            }else{
                if(candidate==arr[i]){
                    count++;
                }else{
                    count--;
                }
            }
        }
        int ans=0;
       for(int i=0;i<n;i++){
           if(arr[i]==candidate){
               ans++;
           }
       }
       if(ans>n/2){
           return candidate;
       }else{
           return -1;
       }
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends