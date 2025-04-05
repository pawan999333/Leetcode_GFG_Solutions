class Solution {
public:
    string removeDuplicates(string s) {

        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.size()==0){
                st.push(s[i]);
            }else if(st.top()==s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        string ans1="";
        while(!st.empty()){
            ans1+=st.top();
            st.pop();
        }
        string ans="";
        for(int i=ans1.size()-1;i>=0;i--){
            ans+=ans1[i];
        }
        return ans;
        
    }
};