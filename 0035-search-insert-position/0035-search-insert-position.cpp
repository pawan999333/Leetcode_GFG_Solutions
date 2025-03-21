class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         
        int index=nums.size();
        int start=0,end=nums.size()-1,mid;
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                index=mid;
                return index;
            }else if(nums[mid]>target){
                index=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return index;
    }
};