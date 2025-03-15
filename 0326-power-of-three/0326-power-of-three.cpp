class Solution {
public:

  
  bool div(int n){
    if(n==1)return true;
    else if(n%3 !=0 || n==0) return false;
    return div(n/3);
  }
    bool isPowerOfThree(int n) {
        return div(n);
    }
};