class Solution {
public:
    void sortColors(vector<int>& nums) {
      int count1=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]==0){
              count1++;
          }
      }

        int count2=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==1){
              count2++;
          }
      }

      int count3=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==2){
              count3++;
          }
      }
        
        for(int i=0;i<count1;i++){
            nums[i]=0;
        }
        for(int i=count1;i<count1+count2;i++){
            nums[i]=1;
        }
        for(int i=count1+count2;i<count1+count2+count3;i++){
            nums[i]=2;
        }
    }
};