class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int>ans(256,0);
        int first=0,second=0,len=0;
        while(second<s.size()){
            while(ans[s[second]]){
                ans[s[first]]=0;
                first++;
            }
            ans[s[second]]=1;
            len=max(len,second-first+1);
            second++;
        }
        return len;
        
    }
};