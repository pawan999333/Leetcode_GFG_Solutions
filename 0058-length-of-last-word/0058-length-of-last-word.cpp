class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int idx=s.find_last_not_of(' ')+1;
        s.erase(idx);
        int last_space_idx=s.find_last_of(' ');
        return last_space_idx==string::npos ? s.length() :s.length() - last_space_idx-1;
    }
};