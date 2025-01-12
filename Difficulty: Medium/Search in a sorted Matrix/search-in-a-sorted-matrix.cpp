//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        
        int start=0;
        int n=mat.size();
        int m=mat[0].size();
        int end=(n*m)-1;
        
        while(start<=end){
            int mid=(end+start)/2;
            int row_index=mid/m;
            int col_index=mid%m;
            if(mat[row_index][col_index]==x){
                return 1;
            }else if(mat[row_index][col_index]<x){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends