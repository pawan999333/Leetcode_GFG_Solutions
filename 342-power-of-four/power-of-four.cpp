class Solution {
public:


   bool div(int n){
    if(n==1) return true;
    else if(n%4 != 0 || n==0) return false;
    return div(n/4);
    
   }
    bool isPowerOfFour(int n) {
   return div(n);
        
    }
};