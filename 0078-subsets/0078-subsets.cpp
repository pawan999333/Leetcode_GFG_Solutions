class Solution {

  void  subseq(vector<int> &arr,int index, int n, vector<vector<int>> &ans, vector<int>temp){

        if(index==n){
            ans.push_back(temp);
            return ;
        }
        subseq(arr,index+1,n,ans,temp);
        temp.push_back(arr[index]);
  
        subseq(arr,index+1,n,ans,temp);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int>temp;
        subseq(nums,0,nums.size(),ans,temp);
        return ans;
        
    }
};