class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int c=sum(n);
        int count=0;
        for(int i=0;i<nums.size();i++){
            count += nums[i];
        }
       
       return (c-count);
        
    }

    int sum(int n){
        if(n==1){
            return 1;
        }
        return n+sum(n-1);
    }
};