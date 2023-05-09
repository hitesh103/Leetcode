class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int mini = INT_MAX;
        int mini2 = INT_MAX;
        string s = "";
        bool flag = false;
        int as = INT_MAX;

        // First we check if we have any similar element in two array?
        // If it is , then taking its minimum and returning it 

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    flag = true;
                    as = min(as,nums1[i]);
                }      
            }
        }

        // If there is no similat element then we will take smaller element from both and then return it.

        if(flag){
            return as;
        }

        for(int i=0;i<n;i++){
            mini = min(mini,nums1[i]);
        }

        for(int i=0;i<m;i++){
            mini2 = min(mini2,nums2[i]);
        }

            if(mini<mini2){
            s = s+to_string(mini);
            s = s+to_string(mini2);
            }else{
            s = s+to_string(mini2);                
            s = s+to_string(mini);
            }
        int ans =  stoi(s);
        return ans;
    }
};