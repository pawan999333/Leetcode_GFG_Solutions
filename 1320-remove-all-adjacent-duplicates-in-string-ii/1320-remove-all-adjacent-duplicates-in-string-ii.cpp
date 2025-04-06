class Solution {
public:
    string removeDuplicates(string s, int k) {

        vector<pair<char,int>>st;
        for(int i=0;i<s.size();i++){
            if(st.size()==0 || st.back().first != s[i]){
                st.push_back({s[i],1});
            }else{
                st.back().second++;
            }
            if(st.back().second==k){
                st.pop_back();
            }
        }
        string res;
        for(int i=0;i<st.size();i++){
            res.append(st[i].second,st[i].first);
        }

        return res;
        
    }
};