class Solution {
public:
    int majorityElement(vector<int>& nums) {

       int n=nums.size();
    
       for(int i=0;i<n-1;i++){
        int ans=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                ans++;
            }

        }
        if((ans+1)>n/2){
            return nums[i];
        }
       }

      return nums[0];
        
    }
};