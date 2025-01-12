//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        
        int n=mat.size();
        
        for(int j=0;j<n;j++){
            int start=0,end=n-1;
            while(start<end){
                swap(mat[start][j],mat[end][j]);
                start++;
                end--;
            }
        }
        
        for(int i =0;i<n;i++){
            int start=0,end=n-1;
            while(start<end){
                swap(mat[i][start],mat[i][end]);
                start++;
                end--;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution ob;
        ob.rotateMatrix(matrix);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends