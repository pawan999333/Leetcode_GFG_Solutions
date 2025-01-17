class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       
       vector<vector<int>>total;
        vector<int>ans1;
        for(int i=0;i<nums1.size();i++){
            int res=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    res=1;
                }
            }
            if(res==0){
                int s=0;
                for(int k=0;k<ans1.size();k++){
                    if(ans1[k]==nums1[i]){
                        s=1;
                    }
                }
                    
                if(s==0){
                
                ans1.push_back(nums1[i]);
                }
                
            }
        }

        vector<int>ans2;
         for(int i=0;i<nums2.size();i++){
            int res=0;
            for(int j=0;j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    res=1;
                }
            }
           
                if(res==0){
                int s=0;
                for(int k=0;k<ans2.size();k++){
                    if(ans2[k]==nums2[i]){
                        s=1;
                    }
                }
                    
                if(s==0){
                
                ans2.push_back(nums2[i]);
                }
                
            
                
            }
        }

        total.push_back(ans1);
        total.push_back(ans2);
        return total;
    }
};