class Solution {
    void rev(vector<char> & s, int start, int end){
        if(start>=end){
            return;
        }
        char c=s[start];
        s[start]=s[end];
        s[end]=c;
        rev(s,start+1,end-1);
    }
public:
    void reverseString(vector<char>& s) {
        
        rev(s,0,s.size()-1);
        // cout<<s;
    }
};