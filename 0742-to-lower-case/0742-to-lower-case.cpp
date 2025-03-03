class Solution {

  
public:
    string toLowerCase(string s) {
      for(int i=0;i<s.length();i++){
        int c=s[i];
        if(c>=65 && c<=90){
        s[i]='a'+s[i]-'A';
        }
      }
      return s;
        
    }
};