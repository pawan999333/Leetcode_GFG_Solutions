class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> p;
        p.push_back(firstocc(nums, target));
        p.push_back(lastocc(nums, target));

        return p;
    }

    int firstocc(vector<int>& arr, int k){
        int s = 0;
        int e = arr.size() - 1;
        int mid;
        int ans = -1;

        while (s <= e){
            mid = s + (e - s) / 2;
            if (arr[mid] == k){
                ans = mid;
                e = mid - 1;
            }
            else if (arr[mid] > k){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }

    int lastocc(vector<int>& arr, int k){
        int s = 0;
        int e = arr.size() - 1;
        int mid;
        int ans = -1;

        while (s <= e){
            mid = s + (e - s) / 2;
            if (arr[mid] == k){
                ans = mid;
                s = mid + 1;
            }
            else if (arr[mid] > k){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};
