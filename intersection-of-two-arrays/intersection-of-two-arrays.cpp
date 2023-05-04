class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        set<int> ans;
        vector<int> anss;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums2[j] == nums1[i]){
                    ans.insert(nums2[j]);
                }
            }
        }

        for(auto i : ans){
            anss.push_back(i);
        }
       
        return anss;
    }
};