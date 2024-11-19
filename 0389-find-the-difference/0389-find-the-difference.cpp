class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char ans=s[0];
        for(int i=1;i<s.length();i++){
            ans=ans^s[i];
        }
        for(int i=0;i<t.length();i++){
            ans=ans^t[i];
        }
        return ans;
    }
};