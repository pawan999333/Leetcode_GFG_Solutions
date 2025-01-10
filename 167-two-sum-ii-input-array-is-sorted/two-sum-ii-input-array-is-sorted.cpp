class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> twoSum;
        int n=numbers.size();
       int start=0;
       int end=n-1;
       while(start<end){
        if(numbers[start]+numbers[end]==target){
            twoSum.push_back(start+1);
            twoSum.push_back(end+1);
            return twoSum;
        }else if(numbers[start]+numbers[end]>target){
            end--;
        }else{
            start++;
        }
       }
       return twoSum;
    }
};