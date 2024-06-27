class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int p=0;
        int n=1;
        int l=nums.size();
        
        vector<int> res(l);
        
        for(int &num : nums){
            
            if(num>0){
                res[p]=num;
                p+=2;
            }else{
                res[n]=num;
                n+=2;
            }
            
        }
        
        return res;
    }
};