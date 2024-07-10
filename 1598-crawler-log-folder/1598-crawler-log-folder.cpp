class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int n=logs.size();
        int depth=0;
        for(int i=0;i<n;i++){
            if(logs[i]=="../"){
              depth=max(0,depth-1);
            }else if(logs[i]=="./"){
                depth =depth;
            }else{
                depth +=1;
            }
        }
        
        
        return depth;
        
    }
};