class Solution {
public:
    string sortVowels(string s) {

        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }else  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }

        string ans;
        for(int i=0;i<26;i++){
            char ch=i+'A';
            while(upper[i]){
                ans+=ch;
                upper[i]--;
            }
        }

            for(int i=0;i<26;i++){
            char ch=i+'a';
            while(lower[i]){
                ans+=ch;
                lower[i]--;
            }
            } 
            int first=0,second=0;
            while(second<ans.size()){
                if(s[first]=='#'){
                    s[first]=ans[second];
                    second++;
                }
                first++;
            }

            return s;
        
        
    }
};