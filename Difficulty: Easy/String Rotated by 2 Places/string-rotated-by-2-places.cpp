//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    
    
    
    void checkclockwise( string &s){
        char c=s[s.size()-1];
        int index=s.size()-2;
        while(index>=0){
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;
    }
    
    void checkanticlockwise(string &s){
        char c=s[0];
        int index=1;
        while(index<s.size()){
            s[index-1]=s[index];
            index++;
            
        }
        s[s.size()-1]=c;
    }
    
    
    bool isRotated(string& s1, string& s2) {
        // Your code here
        
        if(s1.size() != s2.size()){
            return 0;
        }
        
        string anticlockwise=s1;
        string clockwise=s1;
        
        checkclockwise(clockwise);
        checkclockwise(clockwise);
        if(clockwise == s2){
            return 1;
        }
        
        checkanticlockwise(anticlockwise);
        checkanticlockwise(anticlockwise);
        if(anticlockwise == s2){
            return 1;
        }
        
        return 0;
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends