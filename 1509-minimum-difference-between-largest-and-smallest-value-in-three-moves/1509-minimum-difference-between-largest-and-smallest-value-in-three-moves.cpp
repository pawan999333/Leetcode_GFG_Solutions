class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int min_val=INT_MAX;
        if(n<=4){
            return 0;
        }
        
        min_val=min(min_val,nums[n-4]-nums[0]);
        min_val=min(min_val,nums[n-1]-nums[3]);
        min_val=min(min_val,nums[n-2]-nums[2]);
        min_val=min(min_val,nums[n-3]-nums[1]);
        
        
        return min_val;


        
        
    }
};