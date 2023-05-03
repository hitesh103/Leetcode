class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> ans(2);
        set<int> a;
        set<int> b;

        for(int i =0;i<n;i++){
            a.insert(nums1[i]);
        }
        nums1.clear();

        for(int i =0;i<m;i++){
            b.insert(nums2[i]);
        }
        nums2.clear();


        for(auto x : a){
            nums1.push_back(x);
        }

        for(auto x : b){
            nums2.push_back(x);
        }

         n = nums1.size();
         m = nums2.size();

        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(nums1[i] != nums2[j]){
                    cnt++;
                    if(cnt == m){
                        ans[0].push_back(nums1[i]);
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums2[i] != nums1[j]){
                    cnt++;
                    if(cnt == n){
                        ans[1].push_back(nums2[i]);
                    }
                }
            }
        }

        return ans;        
    }
};
