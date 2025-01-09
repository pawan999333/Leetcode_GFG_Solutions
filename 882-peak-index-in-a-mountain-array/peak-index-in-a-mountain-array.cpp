class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int ans=0;
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
                ans=i;
            }
        }

        return ans;
        
    }
};