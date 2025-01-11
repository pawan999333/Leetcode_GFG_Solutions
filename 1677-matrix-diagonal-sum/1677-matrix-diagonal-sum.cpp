class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int first=0;
        int second=0;
        int n=mat.size();
        
        for(int i=0;i<n;i++){
            first+=mat[i][i];
        }
        int start=0,end=n-1;
        while(end>=0){
            if(start!=end){
                second+=mat[start][end];
               
            }
             start++;
                end--;
        }
        return (first+second);
    }
};