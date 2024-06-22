class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int max_val=0;
       
        
        int i=0;
        int j=n-1;
        while(i<j){
            int w=j-i;
            int h=min(height[i],height[j]);
            int area=w*h;
            max_val=max(max_val,area);
            if(height[i]>height[j]){
               
                j--;
            }else{
                i++;
            }
        }
        
        return max_val;
        
    }
};