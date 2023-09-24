class Solution {
public:
    
    
    long long int squareRoot(int x){
        int s=0;
        int e=x;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        
        while(s<=e){
            if(mid*mid == x){
                return mid;
            }
            
            else if(mid*mid>x){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
            
            mid=s+(e-s)/2;
        }
        
        return ans;
    }
    int mySqrt(int x) {
        return squareRoot(x);
        
    }
};